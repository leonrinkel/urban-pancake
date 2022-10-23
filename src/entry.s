    .syntax unified
    .cpu cortex-m0
    .fpu softvfp
    .thumb

    .section .text.reset_handler
    .weak reset_handler
    .type reset_handler, %function
reset_handler:
    /* set sp */
    ldr r0, =_end_of_stack
    mov sp, r0

    /* zero bss section */
    ldr r0, =_start_of_bss
    ldr r1, =_end_of_bss
    movs r2, #0
.bss_loop:
    cmp r0, r1
    beq .bss_loop_end
    str r2, [r0]
    adds r0, r0, #4
    b .bss_loop
.bss_loop_end:

    /* copy data section */
    ldr r0, =_start_of_idata
    ldr r1, =_start_of_data
    ldr r2, =_end_of_data
    movs r3, #0
.data_loop:
    adds r4, r1, r3
    cmp r4, r2
    beq .data_loop_end
    ldr r4, [r0, r3]
    str r4, [r1, r3]
    adds r3, r3, #4
    b .data_loop
.data_loop_end:

    bal start

.loop_forever:
    b .loop_forever

.size reset_handler, . - reset_handler

    .section .isr_vector, "a"
    .type isr_vector, %object
isr_vector:
    .word _end_of_stack
    .word reset_handler

.size isr_vector, . - isr_vector
