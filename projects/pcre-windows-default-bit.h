/*
    bit.h -- Build It Configuration Header for windows-x86-default

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
    #define BIT_REQUIRES "winsdk,compiler,lib,link,rc"
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

/* Prefixes */
#ifndef BIT_ROOT_PREFIX
    #define BIT_ROOT_PREFIX "C:"
#endif
#ifndef BIT_PROGRAMFILES_PREFIX
    #define BIT_PROGRAMFILES_PREFIX "C:/Program Files"
#endif
#ifndef BIT_PROGRAMFILES32_PREFIX
    #define BIT_PROGRAMFILES32_PREFIX "C:/Program Files"
#endif
#ifndef BIT_BASE_PREFIX
    #define BIT_BASE_PREFIX "C:/Program Files"
#endif
#ifndef BIT_APP_PREFIX
    #define BIT_APP_PREFIX "C:/Program Files/PCRE Library"
#endif
#ifndef BIT_VAPP_PREFIX
    #define BIT_VAPP_PREFIX "C:/Program Files/PCRE Library"
#endif
#ifndef BIT_DATA_PREFIX
    #define BIT_DATA_PREFIX "C:/Program Files/PCRE Library"
#endif
#ifndef BIT_STATE_PREFIX
    #define BIT_STATE_PREFIX "C:/Program Files/PCRE Library"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "C:/Program Files/PCRE Library/bin"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "C:/Program Files/PCRE Library/inc"
#endif
#ifndef BIT_LIB_PREFIX
    #define BIT_LIB_PREFIX "C:/Program Files/PCRE Library/lib"
#endif
#ifndef BIT_MAN_PREFIX
    #define BIT_MAN_PREFIX "C:/Program Files/PCRE Library/man"
#endif
#ifndef BIT_ETC_PREFIX
    #define BIT_ETC_PREFIX "C:/Program Files/PCRE Library"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "C:/Program Files/PCRE Library/web"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "C:/Program Files/PCRE Library/log"
#endif
#ifndef BIT_SPOOL_PREFIX
    #define BIT_SPOOL_PREFIX "C:/Program Files/PCRE Library/tmp"
#endif
#ifndef BIT_CACHE_PREFIX
    #define BIT_CACHE_PREFIX "C:/Program Files/PCRE Library/cache"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "C:/Program Files/PCRE Library/src"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ".exe"
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".lib"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".dll"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".lib"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".obj"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform windows-x86-default -configure . -gen vs"
#endif
#ifndef BIT_PCRE_PRODUCT
    #define BIT_PCRE_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "default"
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
#ifndef BIT_PACK_RC
    #define BIT_PACK_RC 1
#endif
#ifndef BIT_PACK_VXWORKS
    #define BIT_PACK_VXWORKS 0
#endif
#ifndef BIT_PACK_WINSDK
    #define BIT_PACK_WINSDK 1
#endif
