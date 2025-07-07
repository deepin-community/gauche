/*
 * 'system' certificate loader.  This is included from both tls.c and
 * tls-mbed.c.
 * We can't consolidate it, for tls-mbed.c may be compiled into a separate
 * DLL, and it is cumbersome on Windows to do cross-DLL reference.
 */

#ifdef HAVE_WINCRYPT_H
static ScmObj system_cert_loader(ScmTLS *t,
                                 int (*mem_loader)(ScmTLS*, BYTE*, DWORD))
{
    const HCERTSTORE h = CertOpenStore(CERT_STORE_PROV_SYSTEM,
                                       X509_ASN_ENCODING,
                                       0,
                                       (CERT_STORE_SHARE_STORE_FLAG |
                                        CERT_STORE_SHARE_CONTEXT_FLAG |
                                        CERT_STORE_OPEN_EXISTING_FLAG |
                                        CERT_STORE_READONLY_FLAG |
                                        CERT_SYSTEM_STORE_LOCAL_MACHINE),
                                       TEXT("Root"));
    if (h == NULL) {
        Scm_Warn("Can't open certificate store");
        return SCM_FALSE;
    }

    if(!CertControlStore(h, 0, CERT_STORE_CTRL_AUTO_RESYNC, NULL)) {
        Scm_Warn("Can't resync certificate store");
        CertCloseStore(h, 0);
        return SCM_FALSE;
    }


    PCCERT_CONTEXT ctx = NULL;
    int num_loaded_certs = 0;
    while(1) {
        ctx = CertEnumCertificatesInStore(h, ctx);

        if (ctx == NULL) { break; }

        /* We allow loading certs fail, for it is merely unsupported. */
        int st = mem_loader(t, ctx->pbCertEncoded, ctx->cbCertEncoded);
        if(st == 0) num_loaded_certs++;
    }
    if (num_loaded_certs == 0) {
        Scm_Warn("No valid certificate found in the system's cert store");
    }
    CertCloseStore(h, 0);
    return SCM_TRUE;
}
#else

/* Get in_gauche_cacert_path()  */
#include "in_gauche_cacert_path.c"

static ScmObj system_cert_loader(ScmTLS *t,
                                 int (*file_loader)(ScmTLS*, const char *))
{
    static const char *cert_path = NULL;

    if (cert_path == NULL) {
        const char *cacert_paths[] = {
            SYSTEM_CA_CERT_PATHS,
            in_gauche_cacert_path(),
            NULL
        };
        for (const char **p = cacert_paths; *p != NULL; p++) {
            int st = file_loader(t, *p);
            if (st == SSL_OK) {
                cert_path = *p;
                return SCM_TRUE;
            }
        }
    } else {
        int st = file_loader(t, cert_path);
        if (st == SSL_OK) return SCM_TRUE;
    }
    return SCM_FALSE;
}
#endif
