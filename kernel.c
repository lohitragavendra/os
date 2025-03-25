#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/system.h"
#include "include/idt.h"
#include "include/isr.h"
#include "include/util.h"

void kmain()
{
       isr_install();
       clearScreen();
       print("Welcome to Lohit's operating system\nPlease enter a command\n");
       
       while (1)
       {                      
                print("\n>>> ");
                string ch = readStr();
                
                if(strEql(ch, "lohit"))
                {
                        print("\nHe's the creator of this OS :) \n");
                }
                else if(strEql(ch, "cmd"))
                {
                        print("\nYou are already in cmd \n");
                }
                else if(strEql(ch, "clear"))
                {
                        clearScreen();
                }      
                else
                {
                        print("\nInvalid command! \n");
                }
                print("\n");        
       } 
}

