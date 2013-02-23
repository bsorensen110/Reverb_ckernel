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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x68428b04, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0xa57afc74, "ktime_get" },
	{ 0xe3ebd26c, "usb_kill_urb" },
	{ 0xd3845210, "__video_register_device" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x48a0f939, "mutex_lock_interruptible" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x7adaf797, "video_unregister_device" },
	{ 0xc186e26, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x97b91549, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf6384fa7, "vm_insert_page" },
	{ 0xde625981, "module_put" },
	{ 0x9b69e012, "usb_submit_urb" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0x48a6f9cf, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x9a5a702c, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xca5663da, "usb_clear_halt" },
	{ 0x223815b9, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbe0c6fca, "input_unregister_device" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5640deab, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xaf968c7b, "vmalloc_to_page" },
	{ 0x2f5256d7, "usb_alloc_coherent" },
	{ 0x65603bc2, "dev_get_drvdata" },
	{ 0x31150669, "usb_free_urb" },
	{ 0x41afd2fb, "video_ioctl2" },
	{ 0x30c1a6f9, "usb_alloc_urb" },
	{ 0xde1cc2b1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

