#ifndef KB_H
#define KB_H
#include "screen.h"
#include "util.h"

string readStr();

#endif


/*
#ifndef KB_H
#define KB_H
#include "string.h"
#include "screen.h"
#include "system.h"
#include "types.h"

#define BUFFER_SIZE 256  // Define a max buffer size

string readStr()
{
    char buff;
    string buffstr;
    uint8 i = 0;
    uint8 reading = 1;
    while(reading)
    {
        if(inportb(0x64) & 0x1)                 
        {
            switch(inportb(0x60))
            { 
      //case 1:
        //        printch('(char)27);           Escape button
        //       buffstr[i] = (char)27;
        //        i++;
        //        break;
        case 2:
                printch('1');
                buffstr[i] = '1';
                i++;
                break;
        case 3:
                printch('2');
                buffstr[i] = '2';
                i++;
                break;
        case 4:
                printch('3');
                buffstr[i] = '3';
                i++;
                break;
        case 5:
                printch('4');
                buffstr[i] = '4';
                i++;
                break;
        case 6:
                printch('5');
                buffstr[i] = '5';
                i++;
                break;
        case 7:
                printch('6');
                buffstr[i] = '6';
                i++;
                break;
        case 8:
                printch('7');
                buffstr[i] = '7';
                i++;
                break;
        case 9:
                printch('8');
                buffstr[i] = '8';
                i++;
                break;
        case 10:
                printch('9');
                buffstr[i] = '9';
                i++;
                break;
        case 11:
                printch('0');
                buffstr[i] = '0';
                i++;
                break;
        case 12:
                printch('-');
                buffstr[i] = '-';
                i++;
                break;
        case 13:
                printch('=');
                buffstr[i] = '=';
                i++;
                break;
        case 14:
                printch('\b');
                i--;
                buffstr[i] = 0;
                break;
       // case 15:
       //         printch('\t');          Tab button
       //         buffstr[i] = '\t';
       //         i++;
       //         break;
        case 16:
                printch('q');
                buffstr[i] = 'q';
                i++;
                break;
        case 17:
                printch('w');
                buffstr[i] = 'w';
                i++;
                break;
        case 18:
                printch('e');
                buffstr[i] = 'e';
                i++;
                break;
        case 19:
                printch('r');
                buffstr[i] = 'r';
                i++;
                break;
        case 20:
                printch('t');
                buffstr[i] = 't';
                i++;
                break;
        case 21:
                printch('y');
                buffstr[i] = 'y';
                i++;
                break;
        case 22:
                printch('u');
                buffstr[i] = 'u';
                i++;
                break;
        case 23:
                printch('i');
                buffstr[i] = 'i';
                i++;
                break;
        case 24:
                printch('o');
                buffstr[i] = 'o';
                i++;
                break;
        case 25:
                printch('p');
                buffstr[i] = 'p';
                i++;
                break;
        case 26:
                printch('[');
                buffstr[i] = '[';
                i++;
                break;
        case 27:
                printch(']');
                buffstr[i] = ']';
                i++;
                break;
        case 28:
               // printch('\n');
               // buffstr[i] = '\n';
                  i++;
               reading = 0;
                break;
      //  case 29:
      //          printch('q');           Left Control
      //          buffstr[i] = 'q';
      //          i++;
      //         break;
        case 30:
                printch('a');
                buffstr[i] = 'a';
                i++;
                break;
        case 31:
                printch('s');
                buffstr[i] = 's';
                i++;
                break;
        case 32:
                printch('d');
                buffstr[i] = 'd';
                i++;
                break;
        case 33:
                printch('f');
                buffstr[i] = 'f';
                i++;
                break;
        case 34:
                printch('g');
                buffstr[i] = 'g';
                i++;
                break;
        case 35:
                printch('h');
                buffstr[i] = 'h';
                i++;
                break;
        case 36:
                printch('j');
                buffstr[i] = 'j';
                i++;
                break;
        case 37:
                printch('k');
                buffstr[i] = 'k';
                i++;
                break;
        case 38:
                printch('l');
                buffstr[i] = 'l';
                i++;
                break;
        case 39:
                printch(';');
                buffstr[i] = ';';
                i++;
                break;
        case 40:
                printch((char)44);               //   Single quote (')
                buffstr[i] = (char)44;
                i++;
                break;
        case 41:
                printch((char)44);               // Back tick ()
                buffstr[i] = (char)44;
                i++;
                break;
     // case 42:                                 Left shift 
     //           printch('q');
     //           buffstr[i] = 'q';
     //           i++;
     //           break;
    //  case 43:                                 \ (< for somekeyboards)   
    //          printch((char)92);
    //            buffstr[i] = 'q';
    //            i++;
    //            break;
        case 44:
                printch('z');
                buffstr[i] = 'z';
                i++;
                break;
        case 45:
                printch('x');
                buffstr[i] = 'x';
                i++;
                break;
        case 46:
                printch('c');
                buffstr[i] = 'c';
                i++;
                break;
        case 47:
                printch('v');
                buffstr[i] = 'v';
                i++;
                break;                
        case 48:
                printch('b');
                buffstr[i] = 'b';
                i++;
                break;               
        case 49:
                printch('n');
                buffstr[i] = 'n';
                i++;
                break;                
        case 50:
                printch('m');
                buffstr[i] = 'm';
                i++;
                break;               
        case 51:
                printch(',');
                buffstr[i] = ',';
                i++;
                break;                
        case 52:
                printch('.');
                buffstr[i] = '.';
                i++;
                break;            
        case 53:
                printch('/');
                buffstr[i] = '/';
                i++;
                break;            
        case 54:
                printch('.');
                buffstr[i] = '.';
                i++;
                break;            
        case 55:
                printch('/');
                buffstr[i] = '/';
                i++;
                break;            
      //case 56:
      //          printch(' ');           Right shift
      //          buffstr[i] = ' ';
      //          i++;
      //          break;           
        case 57:
                printch(' ');
                buffstr[i] = ' ';
                i++;
                break;
            }
        }
    }
    buffstr[i] = 0;                   
    return buffstr;
}

/*string readStr()
{
    char buffstr[BUFFER_SIZE];  
    uint8 i = 0;
    uint8 reading = 1;

    while (reading)
    {
        if (inportb(0x64) & 0x1)  // Check if key is available
        {
            char key = inportb(0x60);  // Read keycode

            switch (key)
            {
                case 2:  printch('1'); buffstr[i++] = '1'; break;
                case 3:  printch('2'); buffstr[i++] = '2'; break;
                case 4:  printch('3'); buffstr[i++] = '3'; break;
                case 5:  printch('4'); buffstr[i++] = '4'; break;
                case 6:  printch('5'); buffstr[i++] = '5'; break;
                case 7:  printch('6'); buffstr[i++] = '6'; break;
                case 8:  printch('7'); buffstr[i++] = '7'; break;
                case 9:  printch('8'); buffstr[i++] = '8'; break;
                case 10: printch('9'); buffstr[i++] = '9'; break;
                case 11: printch('0'); buffstr[i++] = '0'; break;
                case 12: printch('-'); buffstr[i++] = '-'; break;
                case 13: printch('='); buffstr[i++] = '='; break;
                case 14:  // Backspace handling
                    if (i > 0)
                    {
                        i--;
                        printch('\b');  // Remove last character visually
                    }
                    break;
                case 28:  // Enter key
                    reading = 0;
                    break;
                case 16: printch('q'); buffstr[i++] = 'q'; break;
                case 17: printch('w'); buffstr[i++] = 'w'; break;
                case 18: printch('e'); buffstr[i++] = 'e'; break;
                case 19: printch('r'); buffstr[i++] = 'r'; break;
                case 20: printch('t'); buffstr[i++] = 't'; break;
                case 21: printch('y'); buffstr[i++] = 'y'; break;
                case 22: printch('u'); buffstr[i++] = 'u'; break;
                case 23: printch('i'); buffstr[i++] = 'i'; break;
                case 24: printch('o'); buffstr[i++] = 'o'; break;
                case 25: printch('p'); buffstr[i++] = 'p'; break;
                case 26: printch('['); buffstr[i++] = '['; break;
                case 27: printch(']'); buffstr[i++] = ']'; break;
                case 30: printch('a'); buffstr[i++] = 'a'; break;
                case 31: printch('s'); buffstr[i++] = 's'; break;
                case 32: printch('d'); buffstr[i++] = 'd'; break;
                case 33: printch('f'); buffstr[i++] = 'f'; break;
                case 34: printch('g'); buffstr[i++] = 'g'; break;
                case 35: printch('h'); buffstr[i++] = 'h'; break;
                case 36: printch('j'); buffstr[i++] = 'j'; break;
                case 37: printch('k'); buffstr[i++] = 'k'; break;
                case 38: printch('l'); buffstr[i++] = 'l'; break;
                case 39: printch(';'); buffstr[i++] = ';'; break;
                case 40: printch((char)44); buffstr[i++] = (char)44; break;
                case 44: printch('z'); buffstr[i++] = 'z'; break;
                case 45: printch('x'); buffstr[i++] = 'x'; break;
                case 46: printch('c'); buffstr[i++] = 'c'; break;
                case 47: printch('v'); buffstr[i++] = 'v'; break;
                case 48: printch('b'); buffstr[i++] = 'b'; break;
                case 49: printch('n'); buffstr[i++] = 'n'; break;
                case 50: printch('m'); buffstr[i++] = 'm'; break;
                case 51: printch(','); buffstr[i++] = ','; break;
                case 52: printch('.'); buffstr[i++] = '.'; break;
                case 53: printch('/'); buffstr[i++] = '/'; break;
                case 57: printch(' '); buffstr[i++] = ' '; break;
            }

            // Ensure we do not exceed buffer size
            if (i >= BUFFER_SIZE - 1)
                reading = 0;
        }
    }

    buffstr[i] = '\0';  // Null-terminate the string
    return buffstr;  // Return pointer to buffer
}

*/


