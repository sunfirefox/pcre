#
#   win-i686-debug.sh -- Build It Shell Script to build PCRE Library
#

export VS="$(PROGRAMFILES)\Microsoft Visual Studio 10.0"
export SDK="$(PROGRAMFILES)\Microsoft SDKs\Windows\v7.0A"
export PATH="$(SDK)\Bin:$(VS)\VC\Bin:$(VS)\Common7\IDE:$(VS)\Common7\Tools:$(VS)\SDK\v3.5\bin:$(VS)\VC\VCPackages"
export INCLUDE="$(SDK)\INCLUDE:$(VS)\VC\INCLUDE"
export LIB="$(SDK)\lib:$(VS)\VC\lib"

PLATFORM="win-i686-debug"
CC="cl.exe"
LD="link.exe"
CFLAGS="-nologo -GR- -W3 -Zi -Od -MDd"
DFLAGS="-D_REENTRANT -D_MT -DBLD_FEATURE_PCRE=1"
IFLAGS="-Iwin-i686-debug/inc"
LDFLAGS="-nologo -nodefaultlib -incremental:no -libpath:${PLATFORM}/bin -debug -machine:x86
LIBS="ws2_32.lib advapi32.lib user32.lib kernel32.lib oldnames.lib msvcrt.lib"

[ ! -x ${PLATFORM}/inc ] && mkdir -p ${PLATFORM}/inc ${PLATFORM}/obj ${PLATFORM}/lib ${PLATFORM}/bin
[ ! -f ${PLATFORM}/inc/buildConfig.h ] && cp projects/buildConfig.${PLATFORM} ${PLATFORM}/inc/buildConfig.h

rm -rf win-i686-debug/inc/config.h
cp -r src/config.h win-i686-debug/inc/config.h

rm -rf win-i686-debug/inc/pcre.h
cp -r src/pcre.h win-i686-debug/inc/pcre.h

rm -rf win-i686-debug/inc/pcre_internal.h
cp -r src/pcre_internal.h win-i686-debug/inc/pcre_internal.h

rm -rf win-i686-debug/inc/ucp.h
cp -r src/ucp.h win-i686-debug/inc/ucp.h

rm -rf win-i686-debug/inc/ucpinternal.h
cp -r src/ucpinternal.h win-i686-debug/inc/ucpinternal.h

rm -rf win-i686-debug/inc/ucptable.h
cp -r src/ucptable.h win-i686-debug/inc/ucptable.h

"${CC}" -c -Fo${PLATFORM}/obj/pcre_chartables.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_chartables.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_compile.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_compile.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_exec.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_exec.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_globals.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_globals.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_newline.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_newline.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_ord2utf8.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_ord2utf8.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_tables.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_tables.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_try_flipped.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_try_flipped.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_ucp_searchfuncs.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_ucp_searchfuncs.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_valid_utf8.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_valid_utf8.c

"${CC}" -c -Fo${PLATFORM}/obj/pcre_xclass.obj -Fd${PLATFORM}/obj ${CFLAGS} ${DFLAGS} -I${PLATFORM}/inc src/pcre_xclass.c

"${LD}" -dll -out:${PLATFORM}/bin/libpcre.dll -entry:_DllMainCRTStartup@12 -def:${PLATFORM}/bin/libpcre.def ${LDFLAGS} ${PLATFORM}/obj/pcre_chartables.obj ${PLATFORM}/obj/pcre_compile.obj ${PLATFORM}/obj/pcre_exec.obj ${PLATFORM}/obj/pcre_globals.obj ${PLATFORM}/obj/pcre_newline.obj ${PLATFORM}/obj/pcre_ord2utf8.obj ${PLATFORM}/obj/pcre_tables.obj ${PLATFORM}/obj/pcre_try_flipped.obj ${PLATFORM}/obj/pcre_ucp_searchfuncs.obj ${PLATFORM}/obj/pcre_valid_utf8.obj ${PLATFORM}/obj/pcre_xclass.obj ${LIBS}

