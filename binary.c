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


int main(void){
    unsigned int num = 0x0000000;
    num = setBitOn(num, 2, 4, 1);
    printf("%d", num);
    return 0;
}