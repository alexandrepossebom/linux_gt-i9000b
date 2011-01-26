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
	{ 0xec5ba0f9, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb72397d5, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdc605d46, "register_chrdev" },
	{ 0x9ef749e2, "unregister_chrdev" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x954cbb26, "vsprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7322BFDC00B5B9F0AADCC99");
