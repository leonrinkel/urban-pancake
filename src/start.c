#include "gpio.h"
#include "rcc.h"
#include "usart.h"

void delay(void)
{
    for (int i = 0; i < 0xFFFFF; i++)
    {
        (void) 0;
    }
}

void start(void)
{
    /* enable HSI48 clock and wait till it's ready */
    RCC_CR2->HSI48ON = 0b1;
    while (!RCC_CR2->HSI48RDY);

    /* switch system clock source to HSI48 */
    RCC_CFGR->SW = 0b11;

    /* enable IOPA, IOPB, USART2 peripherals */
    RCC_AHBENR->IOPAEN    = 0b1;
    RCC_AHBENR->IOPBEN    = 0b1;
    RCC_APB1ENR->USART2EN = 0b1;

    /* set alternative mode for USART2 RX/TX pins */
    GPIOA_MODER->MODER2  = 0b10;
    GPIOA_MODER->MODER15 = 0b10;

    /* set output mode for LED pin */
    GPIOB_MODER->MODER3  = 0b01;

    /* set high speed mode for USART2 RX/TX pins */
    GPIOA_OSPEEDR->OSPEEDR2 = 0b11;
    GPIOA_OSPEEDR->OSPEEDR15 = 0b11;

    /* set alternative function 1 for USART2 RX/TX pins */
    GPIOA_AFRL->AFSEL2  = 0b0001;
    GPIOA_AFRH->AFSEL15 = 0b0001;

    /* 115200 baud for USART2 at 48 MHz core clock */
    USART2_BRR->BRR = 0x1A1;

    /* enable USART2 transmit */
    USART2_CR1->TE = 0b1;

    /* enable USART2 */
    USART2_CR1->UE = 0b1;

    const char msg[] = "hello from stm32f042k6\r\n";
    const int msg_len = 25;

    for (;;)
    {
        /* toggle LED */
        GPIOB_ODR->ODR3 ^= 0b1;

        /* transmit message */
        for (int i = 0; i < msg_len; i++)
        {
            while (!USART2_ISR->TXE);
            USART2_TDR->TDR = msg[i];
        }

        delay();
    }
}
