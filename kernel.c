#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
void kmain()
{
       clearScreen();
       print("Welcome to Lohit's operating system\nPlease enter a command\n");
       while (1)
       {
                print("\n>>> ");
                
                string ch = readStr();
                print(ch);
                if(strEql(ch,"cmd"))
                {
                        print("\nYou are already in cmd\n");
                }
                if(strEql(ch,"lohit"))
                {
                        print("\nHe's the creator of this os :)\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                }      
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
        
}
