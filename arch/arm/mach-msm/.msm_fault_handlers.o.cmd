cmd_arch/arm/mach-msm/msm_fault_handlers.o := /home/belial/android/sph-m950/kernel_compiling/scripts/gcc-wrapper.py /home/belial/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_EABI/bin/arm-none-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.msm_fault_handlers.o.d  -nostdinc -isystem /home/belial/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_EABI/bin/../lib/gcc/arm-none-eabi/4.7.2/include -I/home/belial/android/sph-m950/kernel_compiling/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(msm_fault_handlers)"  -D"KBUILD_MODNAME=KBUILD_STR(msm_fault_handlers)" -c -o arch/arm/mach-msm/.tmp_msm_fault_handlers.o arch/arm/mach-msm/msm_fault_handlers.c

source_arch/arm/mach-msm/msm_fault_handlers.o := arch/arm/mach-msm/msm_fault_handlers.c

deps_arch/arm/mach-msm/msm_fault_handlers.o := \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/belial/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_EABI/bin/../lib/gcc/arm-none-eabi/4.7.2/include/stdarg.h \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/linkage.h \
  include/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/posix_types.h \
  include/linux/bitops.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/system.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/irqflags.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/hwcap.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/dynamic_debug.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/div64.h \
  include/linux/signal.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/signal.h \
  include/asm-generic/signal-defs.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/sigcontext.h \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/siginfo.h \
  include/asm-generic/siginfo.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/belial/android/sph-m950/kernel_compiling/arch/arm/include/asm/string.h \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  include/linux/const.h \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/bitmap.h \
  arch/arm/mach-msm/acpuclock.h \

arch/arm/mach-msm/msm_fault_handlers.o: $(deps_arch/arm/mach-msm/msm_fault_handlers.o)

$(deps_arch/arm/mach-msm/msm_fault_handlers.o):
