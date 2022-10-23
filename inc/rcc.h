#ifndef RCC_H
#define RCC_H

#define RCC 0x40021000

#define RCC_CR      ((volatile RCC_CR_t     *) (RCC + 0x00))
#define RCC_CFGR    ((volatile RCC_CFGR_t   *) (RCC + 0x04))
#define RCC_AHBENR  ((volatile RCC_AHBENR_t *) (RCC + 0x14))
#define RCC_APB2ENR ((volatile RCC_APB2ENR_t*) (RCC + 0x18))
#define RCC_APB1ENR ((volatile RCC_APB1ENR_t*) (RCC + 0x1C))
#define RCC_CR2     ((volatile RCC_CR2_t    *) (RCC + 0x34))

typedef struct
{
    unsigned int HSION  :1;
    unsigned int HSIRDY :1;
    unsigned int        :1;
    unsigned int HSITRIM:5;
    unsigned int HSICAL :8;
    unsigned int HSEON  :1;
    unsigned int HSERDY :1;
    unsigned int HSEBYP :1;
    unsigned int CSSON  :1;
    unsigned int        :4;
    unsigned int PLLON  :1;
    unsigned int PLLRDY :1;
    unsigned int        :6;
} RCC_CR_t;

typedef struct
{
    unsigned int SW      :2;
    unsigned int SWS     :2;
    unsigned int HPRE    :4;
    unsigned int PPRE    :3;
    unsigned int         :3;
    unsigned int ADCPRE  :1;
    unsigned int PLLSRC  :2;
    unsigned int PLLXTPRE:1;
    unsigned int PLLMUL  :4;
    unsigned int         :2;
    unsigned int MCO     :4;
    unsigned int MCOPRE  :3;
    unsigned int PLLNODIV:1;
} RCC_CFGR_t;

typedef struct
{
    unsigned int DMAEN    : 1;
    unsigned int DAM2EN   : 1;
    unsigned int SRAMEN   : 1;
    unsigned int          : 1;
    unsigned int FLITFEN  : 1;
    unsigned int          : 1;
    unsigned int CRCEN    : 1;
    unsigned int          :10;
    unsigned int IOPAEN   : 1;
    unsigned int IOPBEN   : 1;
    unsigned int IOPCEN   : 1;
    unsigned int USART4RST: 1;
    unsigned int IOPEEN   : 1;
    unsigned int IOPFEN   : 1;
    unsigned int          : 1;
    unsigned int TSCEN    : 1;
    unsigned int          : 7;
} RCC_AHBENR_t;

typedef struct
{
    unsigned int SYSCFGCOMPEN:1;
    unsigned int             :4;
    unsigned int USART6EN    :1;
    unsigned int USART7EN    :1;
    unsigned int USART8EN    :1;
    unsigned int             :1;
    unsigned int ADCEN       :1;
    unsigned int             :1;
    unsigned int TIM1EN      :1;
    unsigned int SPI1EN      :1;
    unsigned int             :1;
    unsigned int USART1EN    :1;
    unsigned int             :1;
    unsigned int TIM15EN     :1;
    unsigned int TIM16EN     :1;
    unsigned int TIM17EN     :1;
    unsigned int             :3;
    unsigned int DBGMCUEN    :1;
    unsigned int             :9;
} RCC_APB2ENR_t;

typedef struct
{
    unsigned int TIM2EN  :1;
    unsigned int TIM3EN  :1;
    unsigned int         :2;
    unsigned int TIM6EN  :1;
    unsigned int TIM7EN  :1;
    unsigned int         :2;
    unsigned int TIM14EN :1;
    unsigned int         :2;
    unsigned int WWDGEN  :1;
    unsigned int         :2;
    unsigned int SPI2EN  :1;
    unsigned int         :2;
    unsigned int USART2EN:1;
    unsigned int USART3EN:1;
    unsigned int USART4EN:1;
    unsigned int USART5EN:1;
    unsigned int I2C1EN  :1;
    unsigned int I2C2EN  :1;
    unsigned int USBEN   :1;
    unsigned int         :1;
    unsigned int CANEN   :1;
    unsigned int         :1;
    unsigned int CRSEN   :1;
    unsigned int PWREN   :1;
    unsigned int DACEN   :1;
    unsigned int CECEN   :1;
    unsigned int         :1;
} RCC_APB1ENR_t;

typedef struct
{
    unsigned int HSI14ON  :1;
    unsigned int HSI14RDY :1;
    unsigned int HSI14DIS :1;
    unsigned int HSI14TRIM:5;
    unsigned int HSI14CAL :8;
    unsigned int HSI48ON  :1;
    unsigned int HSI48RDY :1;
    unsigned int          :6;
    unsigned int HSI48CAL :8;
} RCC_CR2_t;

#endif /* RCC_H */
