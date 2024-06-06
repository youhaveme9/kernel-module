#include <linux/module.h>
#include <linux/init.h>

/* META INFORMATION */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Roshan Kumar");
MODULE_DESCRIPTION("BASIC LKM");

/** 
 * @brief This function is called, when the module is loaded in the kernel
 */

static int __init ModuleInit(void) {
	printk("Module loaded into the kernel\n");
	return 0;
}

/**
 * @brief This function is called, when the module is removed from the kernel
 */

static void __exit ModuleExit(void) {
	printk("Module removed from kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
