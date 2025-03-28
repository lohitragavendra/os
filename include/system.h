#ifndef SYSTEM_H
#define SYSTEM_H
#include "types.h"
uint8 inportb (uint16 _port);

void outportb (uint16 _port, uint8 _data);

#endif

/*
#ifndef SYSTEM_H
#define SYSTEM_H
#include "types.h"
// to communicate to ports 
// cant be done using c program so we use asm

uint8 inportb (uint16 _port){
    uint8 rv;
    __asm__ __volatile__ ("inb %1, %0" : "=a" (rv) : "dN" (_port));
    return rv;
}

void outportb (uint16 _port, uint8 _data){
    __asm__ __volatile__ ("outb %1, %0"  : : "dN" (_port), "a" (_data));
}

#endif
*/
