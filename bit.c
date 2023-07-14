#include <stdio.h>
struct port
{
    int bit0 : 1;
    int bit1 : 1;
    int bit2 : 1;
    int bit3 : 1;
    int bit4 : 1;
    int bit5 : 1;
    int bit6 : 1;
    int bit7 : 1;
};

int main(void)
{
    struct port p;
    p.bit0 = 1;
    p.bit1 = 0;
    p.bit2 = 1;
    p.bit3 = 1;
    p.bit4 = 1;
    p.bit5 = 0;
    p.bit6 = 1;
    p.bit7 = 0;
    printf("%d\n", p.bit0);
    printf("%d\n", p.bit1);
    printf("%d\n", p.bit2);
    printf("%d\n", p.bit3);
    printf("%d\n", p.bit4);
    printf("%d\n", p.bit5);
    printf("%d\n", p.bit6);
    printf("%d\n", p.bit7);
    return 0;
}