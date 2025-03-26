#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
	isr_install();
	clearScreen();
	print("Welcome to Lohit's operating system\nPlease enter the 'help'  command for more details\n");
        launch_shell(0);    
}
