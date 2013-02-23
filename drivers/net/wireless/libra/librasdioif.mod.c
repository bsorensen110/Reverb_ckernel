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
	{ 0x6fc0c927, "sdio_writeb" },
	{ 0x2b0167ee, "sdio_readb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfce39356, "mmc_detect_change" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x68428b04, "dev_set_drvdata" },
	{ 0xeaa786b1, "sdio_writesb" },
	{ 0xf1afe6db, "sdio_enable_func" },
	{ 0xa1176e3b, "sdio_claim_irq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7907ca6e, "crypto_ahash_digest" },
	{ 0x8e81b287, "crypto_alloc_ablkcipher" },
	{ 0x27e1a049, "printk" },
	{ 0x41f46bc4, "sdio_readsb" },
	{ 0x2d38b638, "sdio_unregister_driver" },
	{ 0x2a4c7cf1, "sdio_set_host_pm_flags" },
	{ 0xd7f7da62, "sdio_release_irq" },
	{ 0x664e607a, "crypto_destroy_tfm" },
	{ 0x99663e37, "sdio_memcpy_toio" },
	{ 0x1e33fd13, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3cb305ba, "sdio_register_driver" },
	{ 0xc6950029, "sdio_memcpy_fromio" },
	{ 0xe73e86ad, "sdio_claim_host" },
	{ 0x65603bc2, "dev_get_drvdata" },
	{ 0x126d0a45, "sdio_set_block_size" },
	{ 0x35f5ba81, "sdio_disable_func" },
	{ 0xfca83af8, "sdio_release_host" },
	{ 0xc6cc715c, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "53930E1F5494E1975C71290");
