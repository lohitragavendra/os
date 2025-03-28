#ifndef ISR_H
#define ISR_H

#include "types.h"

/* ISRs reserved for CPU exceptions */
void isr0();
void isr1();
void isr2();
void isr3();
void isr4();
void isr5();
void isr6();
void isr7();
void isr8();
void isr9();
void isr10();
void isr11();
void isr12();
void isr13();
void isr14();
void isr15();
void isr16();
void isr17();
void isr18();
void isr19();
void isr20();
void isr21();
void isr22();
void isr23();
void isr24();
void isr25();
void isr26();
void isr27();
void isr28();
void isr29();
void isr30();
void isr31();


extern string exception_messages[32];

void isr_install();

#endif

/*
#ifndef ISR_H
#define ISR_H

#include "types.h"
#include "idt.h"
#include "util.h"
#include "screen.h"

string exception_message[32] = {
    "Division by zero ",
    "Debug",
    "Non Maskable Interrupt",
    "Breakpoint",
    "Into Detected Overflow",
    "Out of Bounds",
    "Invalid Opcode",
    "No coprocessor",
    
    "Double fault",
    "Coprocessor segment overrun",
    "Bad TTS",
    "Segment Not Present",
    "Stack Fault",
    "General Protection Fault",
    "Page Fault",
    "Unknown Interrupt",
    
    "Coprocessor Fault",
    "Alignment Check",
    "Machine Check",
    "Reserved - 19",
    "Reserved - 20",
    "Reserved - 21",
    "Reserved - 22",
    "Reserved - 23",
    
    "Reserved - 24",
    "Reserved - 25",
    "Reserved - 26",
    "Reserved - 27",
    "Reserved - 28",
    "Reserved - 29",
    "Reserved - 30",
    "Reserved - 31"
};

void isr0(){
  print(exception_message[0]);
  asm("hlt");
}
void isr1(){
  print(exception_message[1]);
  asm("hlt");
}
void isr2(){
  print(exception_message[2]);
  asm("hlt");
}
void isr3(){
  print(exception_message[3]);
  asm("hlt");
}
void isr4(){
  print(exception_message[4]);
  asm("hlt");
}
void isr5(){
  print(exception_message[5]);
  asm("hlt");
}
void isr6(){
  print(exception_message[6]);
  asm("hlt");
}
void isr7(){
  print(exception_message[7]);
  asm("hlt");
}
void isr8(){
  print(exception_message[8]);
  asm("hlt");
}
void isr9(){
  print(exception_message[9]);
  asm("hlt");
}
void isr10(){
  print(exception_message[10]);
  asm("hlt");
}
void isr11(){
  print(exception_message[11]);
  asm("hlt");
}
void isr12(){
  print(exception_message[12]);
  asm("hlt");
}
void isr13(){
  print(exception_message[13]);
  asm("hlt");
}
void isr14(){
  print(exception_message[14]);
  asm("hlt");
}
void isr15(){
  print(exception_message[15]);
  asm("hlt");
}
void isr16(){
  print(exception_message[16]);
  asm("hlt");
}
void isr17(){
  print(exception_message[17]);
  asm("hlt");
}
void isr18(){
  print(exception_message[18]);
  asm("hlt");
}
void isr19(){
  print(exception_message[19]);
  asm("hlt");
}
void isr20(){
  print(exception_message[20]);
  asm("hlt");
}
void isr21(){
  print(exception_message[21]);
  asm("hlt");
}
void isr22(){
  print(exception_message[22]);
  asm("hlt");
}
void isr23(){
  print(exception_message[23]);
  asm("hlt");
}
void isr24(){
  print(exception_message[24]);
  asm("hlt");
}
void isr25(){
  print(exception_message[25]);
  asm("hlt");
}
void isr26(){
  print(exception_message[26]);
  asm("hlt");
}
void isr27(){
  print(exception_message[27]);
  asm("hlt");
}
void isr28(){
  print(exception_message[28]);
  asm("hlt");
}
void isr29(){
  print(exception_message[29]);
  asm("hlt");
}
void isr30(){
  print(exception_message[30]);
  asm("hlt");
}
void isr31(){
  print(exception_message[31]);
  asm("hlt");
}

void isr_install(){
  set_idt_gate(0, (uint32)isr0);
  set_idt_gate(1, (uint32)isr1);
  set_idt_gate(2, (uint32)isr2);
  set_idt_gate(3, (uint32)isr3);
  set_idt_gate(4, (uint32)isr4);
  set_idt_gate(5, (uint32)isr5);
  set_idt_gate(6, (uint32)isr6);
  set_idt_gate(7, (uint32)isr7);
  set_idt_gate(8, (uint32)isr8);
  set_idt_gate(9, (uint32)isr9);
  set_idt_gate(10, (uint32)isr10);
  set_idt_gate(11, (uint32)isr11);
  set_idt_gate(12, (uint32)isr12);
  set_idt_gate(13, (uint32)isr13);
  set_idt_gate(14, (uint32)isr14);
  set_idt_gate(15, (uint32)isr15);
  set_idt_gate(16, (uint32)isr16);
  set_idt_gate(17, (uint32)isr17);
  set_idt_gate(18, (uint32)isr18);
  set_idt_gate(19, (uint32)isr19);
  set_idt_gate(20, (uint32)isr20);
  set_idt_gate(21, (uint32)isr21);
  set_idt_gate(22, (uint32)isr22);
  set_idt_gate(23, (uint32)isr23);
  set_idt_gate(24, (uint32)isr24);
  set_idt_gate(25, (uint32)isr25);
  set_idt_gate(26, (uint32)isr26);
  set_idt_gate(27, (uint32)isr27);
  set_idt_gate(28, (uint32)isr28);
  set_idt_gate(29, (uint32)isr29);
  set_idt_gate(30, (uint32)isr30);
  set_idt_gate(31, (uint32)isr31);
  
  set_idt();
}

#endif
*/
