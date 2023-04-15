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

int isPair(int num){
    return getBit(num, 0) & 0x01; 
}


int main(void){
    unsigned int num = 0x0000000;
    num = setBit(num, 0, 1);
    printf("Caso o resultado seja 0, ele e par: %d", isPair(num));
    return 0;
}