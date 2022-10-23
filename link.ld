ENTRY(reset_handler)

MEMORY
{
    FLASH (rx ) : ORIGIN = 0x08000000, LENGTH = 32K
    RAM   (rwx) : ORIGIN = 0x20000000, LENGTH =  6K
}

_stack_size = 0x100;

SECTIONS
{
    .isr_vector :
    {
        . = ALIGN(4);
        KEEP(*(.isr_vector))
        . = ALIGN(4);
    } >FLASH

    .text :
    {
        . = ALIGN(4);
        _start_of_text = .;
        *(.text)
        *(.text*)
        . = ALIGN(4);
        _end_of_text = .;
    } >FLASH

    .rodata :
    {
        . = ALIGN(4);
        _start_of_rodata = .;
        *(.rodata)
        *(.rodata*)
        . = ALIGN(4);
        _end_of_rodata = .;
    } >FLASH

    _start_of_idata = LOADADDR(.data);

    .data :
    {
        . = ALIGN(4);
        _start_of_data = .;
        *(.data)
        *(.data*)
        . = ALIGN(4);
        _end_of_data = .;
    } >RAM AT>FLASH

    .bss :
    {
        . = ALIGN(4);
        _start_of_bss = .;
        *(.bss)
        *(.bss*)
        . = ALIGN(4);
        _end_of_bss = .;
    } >RAM

    .stack :
    {
        . = ALIGN(4);
        _start_of_stack = .;
        . = . + _stack_size;
        . = ALIGN(4);
        _end_of_stack = .;
    } >RAM
}
