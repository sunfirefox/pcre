/*
    bit.h -- Build It Configuration Header for vxworks-x86-static

    This header is created by Bit during configuration. To change settings, re-run
    configure or define variables in your Makefile to override these default values.
 */


/* Settings */
#ifndef BIT_BIT
    #define BIT_BIT "0.8.5"
#endif
#ifndef BIT_BUILD_NUMBER
    #define BIT_BUILD_NUMBER "0"
#endif
#ifndef BIT_COMPANY
    #define BIT_COMPANY "Embedthis"
#endif
#ifndef BIT_DEBUG
    #define BIT_DEBUG 1
#endif
#ifndef BIT_DEPTH
    #define BIT_DEPTH 1
#endif
#ifndef BIT_DISCOVER
    #define BIT_DISCOVER ""
#endif
#ifndef BIT_HAS_DOUBLE_BRACES
    #define BIT_HAS_DOUBLE_BRACES 1
#endif
#ifndef BIT_HAS_DYN_LOAD
    #define BIT_HAS_DYN_LOAD 1
#endif
#ifndef BIT_HAS_LIB_EDIT
    #define BIT_HAS_LIB_EDIT 0
#endif
#ifndef BIT_HAS_LIB_RT
    #define BIT_HAS_LIB_RT 0
#endif
#ifndef BIT_HAS_MMU
    #define BIT_HAS_MMU 1
#endif
#ifndef BIT_HAS_MTUNE
    #define BIT_HAS_MTUNE 1
#endif
#ifndef BIT_HAS_PAM
    #define BIT_HAS_PAM 0
#endif
#ifndef BIT_HAS_STACK_PROTECTOR
    #define BIT_HAS_STACK_PROTECTOR 1
#endif
#ifndef BIT_HAS_SYNC
    #define BIT_HAS_SYNC 0
#endif
#ifndef BIT_HAS_SYNC_CAS
    #define BIT_HAS_SYNC_CAS 0
#endif
#ifndef BIT_HAS_UNNAMED_UNIONS
    #define BIT_HAS_UNNAMED_UNIONS 1
#endif
#ifndef BIT_PREFIXES
    #define BIT_PREFIXES "embedthis-prefixes"
#endif
#ifndef BIT_PRODUCT
    #define BIT_PRODUCT "pcre"
#endif
#ifndef BIT_REQUIRES
    #define BIT_REQUIRES "vxworks,compiler,lib,link"
#endif
#ifndef BIT_STATIC
    #define BIT_STATIC 1
#endif
#ifndef BIT_SYNC
    #define BIT_SYNC ""
#endif
#ifndef BIT_TITLE
    #define BIT_TITLE "PCRE Library"
#endif
#ifndef BIT_VERSION
    #define BIT_VERSION "1.0.0"
#endif
#ifndef BIT_WARN64TO32
    #define BIT_WARN64TO32 0
#endif
#ifndef BIT_WARN_UNUSED
    #define BIT_WARN_UNUSED 0
#endif

/* Prefixes */
#ifndef BIT_ROOT_PREFIX
    #define BIT_ROOT_PREFIX "deploy"
#endif
#ifndef BIT_BASE_PREFIX
    #define BIT_BASE_PREFIX "deploy"
#endif
#ifndef BIT_DATA_PREFIX
    #define BIT_DATA_PREFIX "deploy"
#endif
#ifndef BIT_STATE_PREFIX
    #define BIT_STATE_PREFIX "deploy"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "deploy"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "deploy/inc"
#endif
#ifndef BIT_LIB_PREFIX
    #define BIT_LIB_PREFIX "deploy"
#endif
#ifndef BIT_MAN_PREFIX
    #define BIT_MAN_PREFIX "deploy"
#endif
#ifndef BIT_SBIN_PREFIX
    #define BIT_SBIN_PREFIX "deploy"
#endif
#ifndef BIT_ETC_PREFIX
    #define BIT_ETC_PREFIX "deploy"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "deploy/web"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "deploy"
#endif
#ifndef BIT_SPOOL_PREFIX
    #define BIT_SPOOL_PREFIX "deploy"
#endif
#ifndef BIT_CACHE_PREFIX
    #define BIT_CACHE_PREFIX "deploy"
#endif
#ifndef BIT_APP_PREFIX
    #define BIT_APP_PREFIX "deploy"
#endif
#ifndef BIT_VAPP_PREFIX
    #define BIT_VAPP_PREFIX "deploy"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "/usr/src/pcre-1.0.0"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ".out"
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".out"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".out"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".a"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".o"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform vxworks-x86-static -static -configure . -gen make"
#endif
#ifndef BIT_PCRE_PRODUCT
    #define BIT_PCRE_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "static"
#endif

/* Miscellaneous */
#ifndef BIT_MAJOR_VERSION
    #define BIT_MAJOR_VERSION 1
#endif
#ifndef BIT_MINOR_VERSION
    #define BIT_MINOR_VERSION 0
#endif
#ifndef BIT_PATCH_VERSION
    #define BIT_PATCH_VERSION 0
#endif
#ifndef BIT_VNUM
    #define BIT_VNUM 100000000
#endif

/* Packs */
#ifndef BIT_PACK_CC
    #define BIT_PACK_CC 1
#endif
#ifndef BIT_PACK_LIB
    #define BIT_PACK_LIB 1
#endif
#ifndef BIT_PACK_LINK
    #define BIT_PACK_LINK 1
#endif
#ifndef BIT_PACK_VXWORKS
    #define BIT_PACK_VXWORKS 1
#endif
#ifndef BIT_PACK_WINSDK
    #define BIT_PACK_WINSDK 0
#endif
