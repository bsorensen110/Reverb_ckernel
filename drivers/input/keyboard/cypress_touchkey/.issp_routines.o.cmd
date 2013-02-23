cmd_drivers/input/keyboard/cypress_touchkey/issp_routines.o := /home/belial/android/sph-m950/kernel_compiling/scripts/gcc-wrapper.py /home/belial/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_EABI/bin/arm-none-eabi-gcc -Wp,-MD,drivers/input/keyboard/cypress_touchkey/.issp_routines.o.d  -nostdinc -isystem /home/belial/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_EABI/bin/../lib/gcc/arm-none-eabi/4.7.2/include -I/home/belial/android/sph-m950/kernel_compiling/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(issp_routines)"  -D"KBUILD_MODNAME=KBUILD_STR(issp_routines)" -c -o drivers/input/keyboard/cypress_touchkey/.tmp_issp_routines.o drivers/input/keyboard/cypress_touchkey/issp_routines.c

source_drivers/input/keyboard/cypress_touchkey/issp_routines.o := drivers/input/keyboard/cypress_touchkey/issp_routines.c

deps_drivers/input/keyboard/cypress_touchkey/issp_routines.o := \
  drivers/input/keyboard/cypress_touchkey/issp_revision.h \
  drivers/input/keyboard/cypress_touchkey/issp_defs.h \
  drivers/input/keyboard/cypress_touchkey/issp_directives.h \
  drivers/input/keyboard/cypress_touchkey/issp_vectors.h \
  drivers/input/keyboard/cypress_touchkey/issp_extern.h \
  drivers/input/keyboard/cypress_touchkey/issp_errors.h \
  drivers/input/keyboard/cypress_touchkey/issp_delays.h \

drivers/input/keyboard/cypress_touchkey/issp_routines.o: $(deps_drivers/input/keyboard/cypress_touchkey/issp_routines.o)

$(deps_drivers/input/keyboard/cypress_touchkey/issp_routines.o):
