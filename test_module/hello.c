#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void) {
    pr_info("Hello from Pi 5 with custom kernel 6.6.78!\n");
    return 0;
}

static void __exit hello_exit(void) {
    pr_info("Goodbye from Pi 5!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Earnest");
MODULE_DESCRIPTION("Test module for Pi 5 driver development");
MODULE_VERSION("1.0");
