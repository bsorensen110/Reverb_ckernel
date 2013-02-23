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
	{ 0x2cf989d0, "crypto_aead_type" },
	{ 0x3c7605e, "crypto_ahash_type" },
	{ 0xa58320e6, "crypto_ablkcipher_type" },
	{ 0x666b7750, "platform_driver_unregister" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0x5cd6f2c9, "platform_driver_register" },
	{ 0x930093a9, "debugfs_remove_recursive" },
	{ 0xad48b2cd, "debugfs_create_file" },
	{ 0xbcab3388, "debugfs_create_dir" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa157b7e3, "crypto_register_ahash" },
	{ 0x2b613593, "_dev_info" },
	{ 0xe6fbf3d7, "dev_err" },
	{ 0xca4560a8, "crypto_register_alg" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x68428b04, "dev_set_drvdata" },
	{ 0x4825357d, "qce_open" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x60f71cfa, "complete" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xec6a4d04, "wait_for_completion_interruptible" },
	{ 0x935eff9e, "crypto_enqueue_request" },
	{ 0x76c6f7a2, "mem_section" },
	{ 0xbe917b8a, "qce_aead_req" },
	{ 0xd5152710, "sg_next" },
	{ 0xd1113113, "page_address" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0x1b07dd70, "crypto_dequeue_request" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0x27e1a049, "printk" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x8949858b, "schedule_work" },
	{ 0x71c90087, "memcmp" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x575c81e1, "qce_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x84b5fd76, "crypto_unregister_ahash" },
	{ 0x8ffcd1cc, "crypto_unregister_alg" },
	{ 0x65603bc2, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce";


MODULE_INFO(srcversion, "2B12B3AD9154F781A49F877");
