#include <stdio.h>
struct port
{
    unsigned int bit0 : 1;
    unsigned int bit1 : 1;
    unsigned int bit2 : 1;
    unsigned int bit3 : 1;
    unsigned int bit4 : 1;
    unsigned int bit5 : 1;
    unsigned int bit6 : 1;
    unsigned int bit7 : 1;
};

int main(void)
{
    struct port p;
    p.bit0 = 1;
    p.bit1 = 0;
    p.bit2 = 1;
    p.bit3 = 0;
    p.bit4 = 1;
    p.bit5 = 0;
    p.bit6 = 1;
    p.bit7 = 0;

    printf("%i%i%i%i%i%i%i%i", p.bit0, p.bit1, p.bit2, p.bit3, p.bit4, p.bit5, p.bit6, p.bit7);
    return 0;
}