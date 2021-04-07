/*
Universidad del Valle de Guatemala
Sistemas Operativos
Amado Garcia 181469
Sara Zavala 18893
Laboratorio 4
*/

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.>

int simple_init(void) {
	printk(KERN_INFO "Loading Module\nValorant");
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO "Removing Module\nValorant");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Nos gusta jugar Valorant");
MODULE_AUTHOR("Sara Zavala y Amado Garcia");