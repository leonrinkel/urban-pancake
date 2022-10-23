#ifndef USART_H
#define USART_H

#define USART2 0x40004400

#define USART2_CR1 ((volatile USARTx_CR1_t*) (USART2 + 0x00))
#define USART2_BRR ((volatile USARTx_BRR_t*) (USART2 + 0x0C))
#define USART2_ISR ((volatile USARTx_ISR_t*) (USART2 + 0x1c))
#define USART2_RDR ((volatile USARTx_RDR_t*) (USART2 + 0x24))
#define USART2_TDR ((volatile USARTx_TDR_t*) (USART2 + 0x28))

typedef struct
{
    unsigned int UE    :1;
    unsigned int UESM  :1;
    unsigned int RE    :1;
    unsigned int TE    :1;
    unsigned int IDLEIE:1;
    unsigned int RXNEIE:1;
    unsigned int TCIE  :1;
    unsigned int TXEIE :1;
    unsigned int PEIE  :1;
    unsigned int PS    :1;
    unsigned int PCE   :1;
    unsigned int WAKE  :1;
    unsigned int M0    :1;
    unsigned int MME   :1;
    unsigned int CMIE  :1;
    unsigned int OVER8 :1;
    unsigned int DEDT  :5;
    unsigned int DEAT  :5;
    unsigned int RTOIE :1;
    unsigned int EOBIE :1;
    unsigned int M1    :1;
    unsigned int       :3;
} USARTx_CR1_t;

typedef struct
{
    unsigned int BRR:16;
    unsigned int    :16;
} USARTx_BRR_t;

typedef struct
{
    unsigned int PE   :1;
    unsigned int FE   :1;
    unsigned int NF   :1;
    unsigned int ORE  :1;
    unsigned int IDLE :1;
    unsigned int RXNE :1;
    unsigned int TC   :1;
    unsigned int TXE  :1;
    unsigned int LBDF :1;
    unsigned int CTSIF:1;
    unsigned int CTS  :1;
    unsigned int RTOF :1;
    unsigned int EOBF :1;
    unsigned int      :1;
    unsigned int ABRE :1;
    unsigned int ABRF :1;
    unsigned int BUSY :1;
    unsigned int CMF  :1;
    unsigned int SBKF :1;
    unsigned int RWU  :1;
    unsigned int WUF  :1;
    unsigned int TEACK:1;
    unsigned int REACK:1;
    unsigned int      :9;
} USARTx_ISR_t;

typedef struct
{
    unsigned int RDR:9;
} USARTx_RDR_t;

typedef struct
{
    unsigned int TDR:9;
} USARTx_TDR_t;

#endif /* USART_H */
