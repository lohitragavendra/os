nasm -f elf kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
#gcc -m32 -c include/system.c -o obj/system.o -ffreestanding
#gcc -m32 -c include/string.c -o obj/string.o -ffreestanding
#gcc -m32 -c include/screen.c -o obj/screen.o -ffreestanding
#gcc -m32 -c include/kb.c -o obj/kb.o -ffreestanding
#gcc -m32 -c include/util.c -o obj/util.o -ffreestanding
#gcc -m32 -c include/idt.c -o obj/idt.o -ffreestanding
#gcc -m32 -c include/isr.c -o obj/isr.o -ffreestanding
ld -m elf_i386 -T link.ld -o iknow/boot/kernel.bin kasm.o kc.o 
#obj/system.o obj/screen.o obj/string.o obj/kb.o obj/util.o obj/idt.o obj/isr.o 
qemu-system-x86_64 -kernel iknow/boot/kernel.bin
grub-mkrescue -o iknow.iso iknow -- -volid "IKNOW"

run a
