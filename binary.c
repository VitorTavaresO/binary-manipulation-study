#include <stdio.h>


int setBit(int num, int bit, int valueBit){
        num &=  ~(0x01 << bit);
        num |= (valueBit << bit);
    return num;
}

int getBit(int num, int bit){
    return (num >> bit) & 0x01;
}

int setBitOn(int num, int startBit, int endBit, int value) {
    int numBits = endBit - startBit + 1;

    int mask = ((1 << numBits) - 1) << startBit;
    mask &= ~(num & mask);
    mask |= (value << startBit);

    num |= mask;

    return num;
}

int clearNum(int num){
    return num & 0x00;
}

int main(void){
    unsigned int num = 0x0000000;
    num = setBitOn(num, 2, 3, 1);
    printf("%d\n", num);
    num = clearNum(num);
    printf("%d\n", num);
    return 0;
}
