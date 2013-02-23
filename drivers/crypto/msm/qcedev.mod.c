#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc92293de, "module_layout" },
	{ 0x666b7750, "platform_driver_unregister" },
	{ 0x5cd6f2c9, "platform_driver_register" },
	{ 0x930093a9, "debugfs_remove_recursive" },
	{ 0xad48b2cd, "debugfs_create_file" },
	{ 0xbcab3388, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x76c6f7a2, "mem_section" },
	{ 0x5e1b3c76, "put_pmem_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xf058882c, "get_pmem_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x60f71cfa, "complete" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9e7ca886, "misc_register" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x68428b04, "dev_set_drvdata" },
	{ 0x4825357d, "qce_open" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9d669763, "memcpy" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x7a4497db, "kzfree" },
	{ 0x27e1a049, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe7b68da4, "misc_deregister" },
	{ 0x575c81e1, "qce_close" },
	{ 0x65603bc2, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce";


MODULE_INFO(srcversion, "01ADB61CF65176B8CA28B67");
