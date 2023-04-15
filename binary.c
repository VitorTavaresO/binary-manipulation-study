int setBit(int num, int bit, int valueBit){
        num &=  ~(0x01 << bit);
        num |= (valueBit << bit);
    return num;
}

int getBit(int num, int bit){
    return (num >> bit) & 0x01;
}

int setBitOn(int num, int firstBit, int lastBit, int valueBit){
    int i;
    for(i = firstBit; i <= lastBit; i++){
        num = setBit(num, i, valueBit);
    }
    return num;
}

int clearNum(int num){
    return num & 0x00;
}

int main(void){
    unsigned int num = 0x0000000;
    num = setBitOn(num, 0, 7, 1);
    printf("%d\n", num);
    num = clearNum(num);
    printf("%d\n", num);
    return 0;
}