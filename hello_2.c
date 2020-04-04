#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("RAKESH");

MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	printk(KERN_INFO "Hello world kernel number 2\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Good bye\n");
}

module_init(hello_start);
module_exit(hello_exit);
