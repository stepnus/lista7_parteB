#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");

static int num = 1;
module_param(num, int, S_IRUGO);

static int hello_init(void)
{
    printk(KERN_ALERT "Olá, seja bem-vindo!\n");
    
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "Finalizando, aqui está seu parâmetro %d\n", num);
}

module_init(hello_init);
module_exit(hello_exit);

