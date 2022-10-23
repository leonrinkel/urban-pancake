#ifndef GPIO_H
#define GPIO_H

#define GPIOA 0x48000000
#define GPIOB 0x48000400
#define GPIOC 0x48000800
#define GPIOD 0x48000C00
#define GPIOE 0x48001000
#define GPIOF 0x48001400

#define GPIOA_MODER ((volatile GPIOx_MODER_t*) (GPIOA + 0x00))
#define GPIOB_MODER ((volatile GPIOx_MODER_t*) (GPIOB + 0x00))
#define GPIOC_MODER ((volatile GPIOx_MODER_t*) (GPIOC + 0x00))
#define GPIOD_MODER ((volatile GPIOx_MODER_t*) (GPIOD + 0x00))
#define GPIOE_MODER ((volatile GPIOx_MODER_t*) (GPIOE + 0x00))
#define GPIOF_MODER ((volatile GPIOx_MODER_t*) (GPIOF + 0x00))

#define GPIOA_OSPEEDR ((volatile GPIOx_OSPEEDR_t*) (GPIOA + 0x08))
#define GPIOB_OSPEEDR ((volatile GPIOx_OSPEEDR_t*) (GPIOB + 0x08))
#define GPIOC_OSPEEDR ((volatile GPIOx_OSPEEDR_t*) (GPIOC + 0x08))
#define GPIOD_OSPEEDR ((volatile GPIOx_OSPEEDR_t*) (GPIOD + 0x08))
#define GPIOE_OSPEEDR ((volatile GPIOx_OSPEEDR_t*) (GPIOE + 0x08))
#define GPIOF_OSPEEDR ((volatile GPIOx_OSPEEDR_t*) (GPIOF + 0x08))

#define GPIOA_ODR ((volatile GPIOx_ODR_t*) (GPIOA + 0x14))
#define GPIOB_ODR ((volatile GPIOx_ODR_t*) (GPIOB + 0x14))
#define GPIOC_ODR ((volatile GPIOx_ODR_t*) (GPIOC + 0x14))
#define GPIOD_ODR ((volatile GPIOx_ODR_t*) (GPIOD + 0x14))
#define GPIOE_ODR ((volatile GPIOx_ODR_t*) (GPIOE + 0x14))
#define GPIOF_ODR ((volatile GPIOx_ODR_t*) (GPIOF + 0x14))

#define GPIOA_AFRL ((volatile GPIOx_AFRL_t*) (GPIOA + 0x20))
#define GPIOB_AFRL ((volatile GPIOx_AFRL_t*) (GPIOB + 0x20))
#define GPIOC_AFRL ((volatile GPIOx_AFRL_t*) (GPIOC + 0x20))
#define GPIOD_AFRL ((volatile GPIOx_AFRL_t*) (GPIOD + 0x20))
#define GPIOE_AFRL ((volatile GPIOx_AFRL_t*) (GPIOE + 0x20))
#define GPIOF_AFRL ((volatile GPIOx_AFRL_t*) (GPIOF + 0x20))

#define GPIOA_AFRH ((volatile GPIOx_AFRH_t*) (GPIOA + 0x24))
#define GPIOB_AFRH ((volatile GPIOx_AFRH_t*) (GPIOB + 0x24))
#define GPIOC_AFRH ((volatile GPIOx_AFRH_t*) (GPIOC + 0x24))
#define GPIOD_AFRH ((volatile GPIOx_AFRH_t*) (GPIOD + 0x24))
#define GPIOE_AFRH ((volatile GPIOx_AFRH_t*) (GPIOE + 0x24))
#define GPIOF_AFRH ((volatile GPIOx_AFRH_t*) (GPIOF + 0x24))

typedef struct
{
    unsigned int MODER0 :2;
    unsigned int MODER1 :2;
    unsigned int MODER2 :2;
    unsigned int MODER3 :2;
    unsigned int MODER4 :2;
    unsigned int MODER5 :2;
    unsigned int MODER6 :2;
    unsigned int MODER7 :2;
    unsigned int MODER8 :2;
    unsigned int MODER9 :2;
    unsigned int MODER10:2;
    unsigned int MODER11:2;
    unsigned int MODER12:2;
    unsigned int MODER13:2;
    unsigned int MODER14:2;
    unsigned int MODER15:2;
} GPIOx_MODER_t;

typedef struct
{
    unsigned int OSPEEDR0 :2;
    unsigned int OSPEEDR1 :2;
    unsigned int OSPEEDR2 :2;
    unsigned int OSPEEDR3 :2;
    unsigned int OSPEEDR4 :2;
    unsigned int OSPEEDR5 :2;
    unsigned int OSPEEDR6 :2;
    unsigned int OSPEEDR7 :2;
    unsigned int OSPEEDR8 :2;
    unsigned int OSPEEDR9 :2;
    unsigned int OSPEEDR10:2;
    unsigned int OSPEEDR11:2;
    unsigned int OSPEEDR12:2;
    unsigned int OSPEEDR13:2;
    unsigned int OSPEEDR14:2;
    unsigned int OSPEEDR15:2;
} GPIOx_OSPEEDR_t;

typedef struct
{
    unsigned int ODR0 :1;
    unsigned int ODR1 :1;
    unsigned int ODR2 :1;
    unsigned int ODR3 :1;
    unsigned int ODR4 :1;
    unsigned int ODR5 :1;
    unsigned int ODR6 :1;
    unsigned int ODR7 :1;
    unsigned int ODR8 :1;
    unsigned int ODR9 :1;
    unsigned int ODR10:1;
    unsigned int ODR11:1;
    unsigned int ODR12:1;
    unsigned int ODR13:1;
    unsigned int ODR14:1;
    unsigned int ODR15:1;
} GPIOx_ODR_t;

typedef struct
{
    unsigned int AFSEL0:4;
    unsigned int AFSEL1:4;
    unsigned int AFSEL2:4;
    unsigned int AFSEL3:4;
    unsigned int AFSEL4:4;
    unsigned int AFSEL5:4;
    unsigned int AFSEL6:4;
    unsigned int AFSEL7:4;
} GPIOx_AFRL_t;

typedef struct
{
    unsigned int AFSEL8 :4;
    unsigned int AFSEL9 :4;
    unsigned int AFSEL10:4;
    unsigned int AFSEL11:4;
    unsigned int AFSEL12:4;
    unsigned int AFSEL13:4;
    unsigned int AFSEL14:4;
    unsigned int AFSEL15:4;
} GPIOx_AFRH_t;

#endif /* GPIO_H */
