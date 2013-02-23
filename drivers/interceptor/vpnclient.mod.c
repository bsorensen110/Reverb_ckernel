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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd1671060, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x943b26a2, "dev_get_flags" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x2e82ebd, "dst_release" },
	{ 0x562ad513, "interruptible_sleep_on" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x3a8ae3cb, "remove_proc_entry" },
	{ 0xce19bac5, "register_inet6addr_notifier" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3028e855, "init_timer_key" },
	{ 0xe1bb40d8, "nf_register_hook" },
	{ 0xa5cba8ad, "skb_realloc_headroom" },
	{ 0xefb1db26, "in_dev_finish_destroy" },
	{ 0x7b518a18, "dst_alloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x79319697, "skb_trim" },
	{ 0xb9ced18f, "netif_rx" },
	{ 0x291327b0, "__pskb_pull_tail" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x538383c0, "unregister_inet6addr_notifier" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xe52592a, "panic" },
	{ 0x74bfbe5, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x5992af65, "register_netdev" },
	{ 0x22d34c42, "skb_push" },
	{ 0x1298ac43, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x80ab0c30, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf982efd1, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4ea1da4f, "dev_kfree_skb_any" },
	{ 0xde625981, "module_put" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x1721ec9e, "ip_route_input_common" },
	{ 0x916ec340, "__alloc_skb" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x2c305a6e, "alloc_netdev_mqs" },
	{ 0x7c55e4e1, "eth_type_trans" },
	{ 0x9710222, "create_proc_entry" },
	{ 0x8ee69235, "timeval_to_jiffies" },
	{ 0x14ffb3c6, "ether_setup" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb2c25bd, "nf_unregister_hook" },
	{ 0xe8473479, "nf_afinfo" },
	{ 0x6e3ac202, "in6_dev_finish_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x554f7a26, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xb101b5b9, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf5cf3aee, "skb_put" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

