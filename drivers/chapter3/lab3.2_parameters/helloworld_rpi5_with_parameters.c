#include <linux/module.h>

/*
name = Variable name in your code
type = Data type (int, bool, charp for strings)
perm = Permissions (who can read it in sysfs)
*/
static int num = 5;
module_param(num, int, S_IRUGO);

static int __init hello_init(void)
{
    pr_info("parameter num = %d\n", num);
    return 0;
}

static void __exit hello_exit(void)
{
    pr_info("Hello world with parameter exit\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("anesto");
MODULE_DESCRIPTION("This is a module that accepts parameters");

