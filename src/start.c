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
    GPIOA->MODER.MODER2  = ALTERNATE_FUNCTION_MODE;
    GPIOA->MODER.MODER15 = ALTERNATE_FUNCTION_MODE;

    /* set output mode for LED pin */
    GPIOB->MODER.MODER3 = GENERAL_PURPOSE_OUTPUT_MODE;

    /* set high speed mode for USART2 RX/TX pins */
    GPIOA->OSPEEDR.OSPEEDR2  = HIGH_SPEED;
    GPIOA->OSPEEDR.OSPEEDR15 = HIGH_SPEED;

    /* set alternative function 1 for USART2 RX/TX pins */
    GPIOA->AFRL.AFSEL2  = AF1;
    GPIOA->AFRH.AFSEL15 = AF1;

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
        GPIOB->ODR.ODR3 ^= 0b1;

        /* transmit message */
        for (int i = 0; i < msg_len; i++)
        {
            while (!USART2_ISR->TXE);
            USART2_TDR->TDR = msg[i];
        }

        delay();
    }
}
