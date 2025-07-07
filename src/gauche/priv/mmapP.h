/*
 * mmapP.h - mmap interface (private)
 *
 *   Copyright (c) 2020-2024  Shiro Kawai  <shiro@acm.org>
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *   3. Neither the name of the authors nor the names of its contributors
 *      may be used to endorse or promote products derived from this
 *      software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 *   TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef GAUCHE_PRIV_MMAPP_H
#define GAUCHE_PRIV_MMAPP_H

struct ScmMemoryRegionRec {
    SCM_HEADER;
    void   *ptr;
    size_t size;
    int prot;
    int flags;
#if defined(GAUCHE_WINDOWS)
    HANDLE fileMapping;         /* file mapping object handle */
#endif
};

SCM_CLASS_DECL(Scm_MemoryRegionClass);
#define SCM_CLASS_MEMORY_REGION  (&Scm_MemoryRegionClass)
#define SCM_MEMORY_REGION(obj)   ((ScmMemoryRegion*)obj)
#define SCM_MEMORY_REGION_P(obj) SCM_XTYPEP(obj, SCM_CLASS_MEMORY_REGION)

SCM_EXTERN ScmObj Scm_SysMmap(void *addrhint, int fd, size_t len, off_t off,
                              int prot, int flags);
SCM_EXTERN void   Scm_SysMmapWX(size_t len,
                                ScmMemoryRegion **writable,
                                ScmMemoryRegion **executable);
#endif /*GAUCHE_PRIV_MMAPP_H*/
