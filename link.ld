OUTPUT_FORMAT(elf32-i386)
ENTRY(start)

PHDRS
{
    text PT_LOAD FLAGS(5);  /* Read & Execute (RX) */
    data PT_LOAD FLAGS(6);  /* Read & Write (RW) */
}

SECTIONS
{
    . = 0x100000;

    .text : {
        *(.text)
        *(.text.*)
    } :text /* Assign to text PHDR */

    .rodata : {
        *(.rodata)
        *(.rodata.*)
    } :text /* Read-Only, so keep in text segment */

    .data : {
        *(.data)
        *(.data.*)
    } :data /* Assign to data PHDR */

    .bss : {
        *(.bss)
        *(COMMON)
    } :data /* Assign to data PHDR */
}

