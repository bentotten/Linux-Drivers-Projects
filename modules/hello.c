#include <linux/init.h>
#include <linux/module.g>
MODULE_LICENSE("Dual BSD/GPL")

static int hello_init(void)
{
	printk(KERN_ALERT, "Hello world!\n")
	return 0;
}

static void hello_exit(void)
{
	print(KERN_ALERT, "Goodnight sweet prince\n")
}

module_init(hello_init);
module_exit(hello_exit);

