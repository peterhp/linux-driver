#include <linux/module.h>
#include <linux/init.h>

#include <linux/kernel.h>

static int k_hello_init(void) {
	printk(KERN_INFO "Hello, driver world!\n");
	return 0;
}

static void k_hello_exit(void) {
	printk(KERN_INFO "Bye, see you next time!\n");
}

module_init(k_hello_init);
module_exit(k_hello_exit);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Sora <sora_lsh@163.com>");
MODULE_DESCRIPTION("First kernel program under Linux.");
MODULE_VERSION("0.0.1.x86_64");

