#ifndef SCREEN_H
#define SCREEN_H
#include "system.h"
#include "string.h"
                                                   //We define the screen width, height, and depth.
void clearLine(uint8 from,uint8 to);

void updateCursor();

void clearScreen();

void scrollUp(uint8 lineNumber);

void newLineCheck();

void printch(char c);

void print (string ch);
void set_screen_color_from_color_code(int color_code);
void set_screen_color(int text_color,int bg_color);
void print_colored(string ch,int text_color,int bg_color);


#endif
/*
#ifndef SCREEN_H
#define SCREEN_H
#include "kb.h"
#include "string.h"
#include "system.h"
#include "types.h"

int cursorX = 0, cursorY=0;
const uint8 sw = 80, sh=25, sd=2;       // screen width, height, depth

void clearLine(uint8 from, uint8 to){
    uint16 i = sw * from * to;
    string vidmem = (string) 0xb8000;
    for(i; i<sw*(to+1)*sd;i++){
          vidmem[i] = 0x0;
    }
}

void updateCursor(){
    unsigned temp;
    temp = cursorY * sw + cursorX;    // pos = (y * width) + x
    
    outportb(0x3D4, 14);              //CRT Control Register: Select Cursor Location
    outportb(0x3D5, temp >> 8);       //Send the high byte across the bus
    outportb(0x3D4, 15);              //CRT Control Register: Select Send Low Byte
    outportb(0x3D5, temp);            //Send the Low byte of the cursor location
}

void clearScreen(){
    clearLine(0,sh-1);
    cursorX = 0;
    cursorY = 0;
    updateCursor();
}

void scrollUp(uint8 lineNumber){
      string vidmem = (string)0xb8000;
      uint16 i = 0;
      for(i; i<sw*(sh-1)*2;i++){
            vidmem[i] = vidmem[i+sw*2*lineNumber];
      }
      clearLine(sh-1-lineNumber, sh-1);
      if((cursorY - lineNumber) < 0){
            cursorY = 0;
            cursorX = 0;
      }
      else{
            cursorY -= lineNumber;
      }
      updateCursor();
}

void newLineCheck(){
      if(cursorY >= sh-1){
            scrollUp(1);
      }
}

void printch(char c){
      string vidmem = (string) 0xb8000;
      switch(c){
            case (0x08):      // backspace
                if(cursorX > 0){
                      cursorX--;
                      vidmem[(cursorY * sw + cursorX) * sd] = 0x00;
                }
                break;
            case (0x09):      // tab
                cursorX = (cursorX + 8) & ~ (8-1);
                break;
            case ('\r'):      // carriage return
                cursorX = 0;
                break;
            case ('\n'):      // newline
                cursorX = 0;
                cursorY++;
                break;
            default:
                vidmem[(cursorY * sw + cursorX) * sd] = c;
                vidmem[(cursorY * sw + cursorX) * sd+1] = 0x0F;
                cursorX++;
                break;
      }
      if(cursorX >= sw){
            cursorX = 0;
            cursorY++;
      }
      newLineCheck();
      updateCursor();
}

void print (string ch){
      uint16 i=0;
      uint16 length = strlength(ch)-1;  // Store the string length
      for(i;i<length;i++){
          printch(ch[i]);
      }
}

#endif
*/
