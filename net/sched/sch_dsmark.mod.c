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
	{ 0xe9b54fc2, "unregister_qdisc" },
	{ 0x13022b7c, "register_qdisc" },
	{ 0xaec1c2e, "__qdisc_calculate_pkt_len" },
	{ 0xfb32f2a5, "kfree_skb" },
	{ 0x969bc1a2, "tc_classify" },
	{ 0xe7098156, "pskb_expand_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0x34a704fb, "qdisc_destroy" },
	{ 0x8d8223db, "tcf_destroy_chain" },
	{ 0x38a6a327, "noop_qdisc" },
	{ 0x5b186de1, "pfifo_qdisc_ops" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x7ee61ed7, "qdisc_tree_decrease_qlen" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xcfa51405, "qdisc_create_dflt" },
	{ 0xea900de9, "qdisc_reset" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x79319697, "skb_trim" },
	{ 0x48ddad45, "nla_put" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

