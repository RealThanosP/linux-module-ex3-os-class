#include <linux/kernel.h>
#include <linux/module.h>
MODULE_DESCRIPTION("My␣kernel␣module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");
static int my_init(void)
{
    printk("Hello World I live in your distro now :)\n");
    return 0;
}
static void my_exit(void)
{
    printk("Sad to see you leave me :(\n");
}
module_init(my_init);
module_exit(my_exit);