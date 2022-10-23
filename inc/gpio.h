#ifndef GPIO_H
#define GPIO_H

enum GPIOx_MODE
{
    INPUT_MODE                  = 0b00,
    GENERAL_PURPOSE_OUTPUT_MODE = 0b01,
    ALTERNATE_FUNCTION_MODE     = 0b10,
    ANALOG_MODE                 = 0b11
};

struct GPIOx_MODER
{
    enum GPIOx_MODE MODER0 :2;
    enum GPIOx_MODE MODER1 :2;
    enum GPIOx_MODE MODER2 :2;
    enum GPIOx_MODE MODER3 :2;
    enum GPIOx_MODE MODER4 :2;
    enum GPIOx_MODE MODER5 :2;
    enum GPIOx_MODE MODER6 :2;
    enum GPIOx_MODE MODER7 :2;
    enum GPIOx_MODE MODER8 :2;
    enum GPIOx_MODE MODER9 :2;
    enum GPIOx_MODE MODER10:2;
    enum GPIOx_MODE MODER11:2;
    enum GPIOx_MODE MODER12:2;
    enum GPIOx_MODE MODER13:2;
    enum GPIOx_MODE MODER14:2;
    enum GPIOx_MODE MODER15:2;
};

enum GPIOx_OT
{
    OUTPUT_PUSH_PULL  = 0b0,
    OUTPUT_OPEN_DRAIN = 0b1
};

struct GPIOx_OTYPER
{
    enum GPIOx_OT OT0 : 1;
    enum GPIOx_OT OT1 : 1;
    enum GPIOx_OT OT2 : 1;
    enum GPIOx_OT OT3 : 1;
    enum GPIOx_OT OT4 : 1;
    enum GPIOx_OT OT5 : 1;
    enum GPIOx_OT OT6 : 1;
    enum GPIOx_OT OT7 : 1;
    enum GPIOx_OT OT8 : 1;
    enum GPIOx_OT OT9 : 1;
    enum GPIOx_OT OT10: 1;
    enum GPIOx_OT OT11: 1;
    enum GPIOx_OT OT12: 1;
    enum GPIOx_OT OT13: 1;
    enum GPIOx_OT OT14: 1;
    enum GPIOx_OT OT15: 1;
    unsigned int      :16;
};

enum GPIOx_OSPEED
{
    LOW_SPEED    = 0b00,
    MEDIUM_SPEED = 0b01,
    HIGH_SPEED   = 0b11
};

struct GPIOx_OSPEEDR
{
    enum GPIOx_OSPEED OSPEEDR0 :2;
    enum GPIOx_OSPEED OSPEEDR1 :2;
    enum GPIOx_OSPEED OSPEEDR2 :2;
    enum GPIOx_OSPEED OSPEEDR3 :2;
    enum GPIOx_OSPEED OSPEEDR4 :2;
    enum GPIOx_OSPEED OSPEEDR5 :2;
    enum GPIOx_OSPEED OSPEEDR6 :2;
    enum GPIOx_OSPEED OSPEEDR7 :2;
    enum GPIOx_OSPEED OSPEEDR8 :2;
    enum GPIOx_OSPEED OSPEEDR9 :2;
    enum GPIOx_OSPEED OSPEEDR10:2;
    enum GPIOx_OSPEED OSPEEDR11:2;
    enum GPIOx_OSPEED OSPEEDR12:2;
    enum GPIOx_OSPEED OSPEEDR13:2;
    enum GPIOx_OSPEED OSPEEDR14:2;
    enum GPIOx_OSPEED OSPEEDR15:2;
};

enum GPIOx_PUPD
{
    NO_PULL_UP_PULL_DOWN = 0b00,
    PULL_UP              = 0b01,
    PULL_DOWN            = 0b10
};

struct GPIOx_PUPDR
{
    enum GPIOx_PUPD PUPDR0 :2;
    enum GPIOx_PUPD PUPDR1 :2;
    enum GPIOx_PUPD PUPDR2 :2;
    enum GPIOx_PUPD PUPDR3 :2;
    enum GPIOx_PUPD PUPDR4 :2;
    enum GPIOx_PUPD PUPDR5 :2;
    enum GPIOx_PUPD PUPDR6 :2;
    enum GPIOx_PUPD PUPDR7 :2;
    enum GPIOx_PUPD PUPDR8 :2;
    enum GPIOx_PUPD PUPDR9 :2;
    enum GPIOx_PUPD PUPDR10:2;
    enum GPIOx_PUPD PUPDR11:2;
    enum GPIOx_PUPD PUPDR12:2;
    enum GPIOx_PUPD PUPDR13:2;
    enum GPIOx_PUPD PUPDR14:2;
    enum GPIOx_PUPD PUPDR15:2;
};

struct GPIOx_IDR
{
    unsigned int IDR0 : 1;
    unsigned int IDR1 : 1;
    unsigned int IDR2 : 1;
    unsigned int IDR3 : 1;
    unsigned int IDR4 : 1;
    unsigned int IDR5 : 1;
    unsigned int IDR6 : 1;
    unsigned int IDR7 : 1;
    unsigned int IDR8 : 1;
    unsigned int IDR9 : 1;
    unsigned int IDR10: 1;
    unsigned int IDR11: 1;
    unsigned int IDR12: 1;
    unsigned int IDR13: 1;
    unsigned int IDR14: 1;
    unsigned int IDR15: 1;
    unsigned int      :16;
};

struct GPIOx_ODR
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
};

struct GPIOx_BSRR
{
    unsigned int BS0 :1;
    unsigned int BS1 :1;
    unsigned int BS2 :1;
    unsigned int BS3 :1;
    unsigned int BS4 :1;
    unsigned int BS5 :1;
    unsigned int BS6 :1;
    unsigned int BS7 :1;
    unsigned int BS8 :1;
    unsigned int BS9 :1;
    unsigned int BS10:1;
    unsigned int BS11:1;
    unsigned int BS12:1;
    unsigned int BS13:1;
    unsigned int BS14:1;
    unsigned int BS15:1;
    unsigned int BR0 :1;
    unsigned int BR1 :1;
    unsigned int BR2 :1;
    unsigned int BR3 :1;
    unsigned int BR4 :1;
    unsigned int BR5 :1;
    unsigned int BR6 :1;
    unsigned int BR7 :1;
    unsigned int BR8 :1;
    unsigned int BR9 :1;
    unsigned int BR10:1;
    unsigned int BR11:1;
    unsigned int BR12:1;
    unsigned int BR13:1;
    unsigned int BR14:1;
    unsigned int BR15:1;
};

enum GPIOx_LCK
{
    PORT_CONFIGURATION_NOT_LOCKED = 0b0,
    PORT_CONFIGURATION_LOCKED     = 0b1
};

enum GPIOx_LCKK
{
    PORT_CONFIGURATION_LOCK_KEY_NOT_ACTIVE = 0b0,
    PORT_CONFIGURATION_LOCK_KEY_ACTIVE     = 0b1
};

struct GPIOx_LCKR
{
    enum GPIOx_LCK  LCK0 : 1;
    enum GPIOx_LCK  LCK1 : 1;
    enum GPIOx_LCK  LCK2 : 1;
    enum GPIOx_LCK  LCK3 : 1;
    enum GPIOx_LCK  LCK4 : 1;
    enum GPIOx_LCK  LCK5 : 1;
    enum GPIOx_LCK  LCK6 : 1;
    enum GPIOx_LCK  LCK7 : 1;
    enum GPIOx_LCK  LCK8 : 1;
    enum GPIOx_LCK  LCK9 : 1;
    enum GPIOx_LCK  LCK10: 1;
    enum GPIOx_LCK  LCK11: 1;
    enum GPIOx_LCK  LCK12: 1;
    enum GPIOx_LCK  LCK13: 1;
    enum GPIOx_LCK  LCK14: 1;
    enum GPIOx_LCK  LCK15: 1;
    enum GPIOx_LCKK LCKK : 1;
    unsigned int         :15;
};

enum GPIOx_AFSEL
{
    AF0 = 0b0000,
    AF1 = 0b0001,
    AF2 = 0b0010,
    AF3 = 0b0011,
    AF4 = 0b0100,
    AF5 = 0b0101,
    AF6 = 0b0110,
    AF7 = 0b0111
};

struct GPIOx_AFRL
{
    enum GPIOx_AFSEL AFSEL0:4;
    enum GPIOx_AFSEL AFSEL1:4;
    enum GPIOx_AFSEL AFSEL2:4;
    enum GPIOx_AFSEL AFSEL3:4;
    enum GPIOx_AFSEL AFSEL4:4;
    enum GPIOx_AFSEL AFSEL5:4;
    enum GPIOx_AFSEL AFSEL6:4;
    enum GPIOx_AFSEL AFSEL7:4;
};

struct GPIOx_AFRH
{
    enum GPIOx_AFSEL AFSEL8 :4;
    enum GPIOx_AFSEL AFSEL9 :4;
    enum GPIOx_AFSEL AFSEL10:4;
    enum GPIOx_AFSEL AFSEL11:4;
    enum GPIOx_AFSEL AFSEL12:4;
    enum GPIOx_AFSEL AFSEL13:4;
    enum GPIOx_AFSEL AFSEL14:4;
    enum GPIOx_AFSEL AFSEL15:4;
};

struct GPIOx_BRR
{
    unsigned int BR0 : 1;
    unsigned int BR1 : 1;
    unsigned int BR2 : 1;
    unsigned int BR3 : 1;
    unsigned int BR4 : 1;
    unsigned int BR5 : 1;
    unsigned int BR6 : 1;
    unsigned int BR7 : 1;
    unsigned int BR8 : 1;
    unsigned int BR9 : 1;
    unsigned int BR10: 1;
    unsigned int BR11: 1;
    unsigned int BR12: 1;
    unsigned int BR13: 1;
    unsigned int BR14: 1;
    unsigned int BR15: 1;
    unsigned int     :16;
};

struct GPIOx
{
    /** GPIO port mode register */
    volatile struct GPIOx_MODER MODER;
    /** GPIO port output type register */
    volatile struct GPIOx_OTYPER OTYPER;
    /** GPIO port output speed register */
    volatile struct GPIOx_OSPEEDR OSPEEDR;
    /** GPIO port pull-up/pull-down register */
    volatile struct GPIOx_PUPDR PUPDR;
    /** GPIO port input data register */
    volatile struct GPIOx_IDR IDR;
    /** GPIO port output data register */
    volatile struct GPIOx_ODR ODR;
    /** GPIO port bit set/reset register */
    volatile struct GPIOx_BSRR BSRR;
    /** GPIO port configuration lock register */
    volatile struct GPIOx_LCKR LCKR;
    /** GPIO alternate function low register */
    volatile struct GPIOx_AFRL AFRL;
    /** GPIO alternate function high register */
    volatile struct GPIOx_AFRH AFRH;
    /** GPIO port bit reset register */
    volatile struct GPIOx_BRR BRR;
};

struct GPIOx* const GPIOA = (struct GPIOx*) 0x48000000u;
struct GPIOx* const GPIOB = (struct GPIOx*) 0x48000400u;
struct GPIOx* const GPIOC = (struct GPIOx*) 0x48000800u;
struct GPIOx* const GPIOD = (struct GPIOx*) 0x48000C00u;
struct GPIOx* const GPIOE = (struct GPIOx*) 0x48001000u;
struct GPIOx* const GPIOF = (struct GPIOx*) 0x48001400u;

#endif /* GPIO_H */
