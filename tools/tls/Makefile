#
# Build mbedtls along Gauche
#

.PHONY: mbedtls

# update these for new MbedTLS version / repo
MBEDTLS_VERSION = 3.6.0
#MBEDTLS_VERSION = 3.5.2
MBEDTLS_SOURCE_BZ  = https://github.com/Mbed-TLS/mbedtls/releases/download/v$(MBEDTLS_VERSION)/mbedtls-$(MBEDTLS_VERSION).tar.bz2
MBEDTLS_SOURCE_GZ  = https://github.com/Mbed-TLS/mbedtls/archive/refs/tags/v$(MBEDTLS_VERSION).tar.gz
FETCHED_BZ = mbedtls-$(MBEDTLS_VERSION).tar.bz2
FETCHED_GZ = mbedtls-$(MBEDTLS_VERSION).tar.gz

LN_S = ln -s
OBJEXT = o

CONFIG_GENERATED = Makefile

MBEDTLS_LIBS_XTRA = libmbedx509.a libmbedcrypto.a
MBEDTLS_LIBS = libmbedtls.a $(MBEDTLS_LIBS_XTRA)
GAUCHE_THREAD_TYPE = pthreads

all: mbedtls

mbedtls: include/mbedtls $(MBEDTLS_LIBS)

include/mbedtls: libmbedtls.a
	rm -rf include
	mkdir include
	cd include && $(LN_S) ../mbedtls-$(MBEDTLS_VERSION)/include/mbedtls .
	cd include && $(LN_S) ../mbedtls-$(MBEDTLS_VERSION)/include/psa .

$(MBEDTLS_LIBS_XTRA) : libmbedtls.a

libmbedtls.a: mbedtls-$(MBEDTLS_VERSION)
	cd mbedtls-$(MBEDTLS_VERSION)                \
	 && ../process-config.sh $(GAUCHE_THREAD_TYPE) include/mbedtls/mbedtls_config.h \
	 && cmake  .          \
	 && make -f CMakeFiles/Makefile2 library/all \
	 && cd library                               \
	 && cp $(MBEDTLS_LIBS) ../..

mbedtls-$(MBEDTLS_VERSION):
	if curl -f -L -o $(FETCHED_BZ) $(MBEDTLS_SOURCE_BZ); then \
	  tar xjvf $(FETCHED_BZ); \
	elif curl -f -L -o $(FETCHED_GZ) $(MBEDTLS_SOURCE_GZ); then \
	  tar xzvf $(FETCHED_GZ); \
	else \
	  echo "Couldn't fetch MbedTLS $(MBEDTLS_VERSION)"; \
	  exit 1; \
	fi
	echo 'set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")' >> mbedtls-$(MBEDTLS_VERSION)/library/CMakeLists.txt

# list-objects target is called by src/list-ext-objects.sh to gather
# object files to archive into static gauche library.
# NB: mbedtls is configured independently from Gauche, so our OBJEXT
# may not match the one used in mbedtls.  We need to use 'find' to collect
# objects heuristically.
list-objects:
	rm -rf objects && mkdir -p objects \
	  && for a in $(MBEDTLS_LIBS); do (cd objects; ar x ../$$a); done \
	  && find objects \( -name '*.$(OBJEXT)' -o -name '*.obj' \) \
	       -exec echo "/// `pwd`/{}" \;

clean:
	rm -rf include objects
	rm -rf $(MBEDTLS_LIBS)
	cd mbedtls-$(MBEDTLS_VERSION) && $(MAKE) -q clean ; true

distclean: clean
	rm -rf mbedtls-$(MBEDTLS_VERSION)

maintainer-clean: clean
	rm -rf mbedtls-$(MBEDTLS_VERSION) $(FETCHED_BZ) $(FETCHED_GZ) $(CONFIG_GENERATED)
