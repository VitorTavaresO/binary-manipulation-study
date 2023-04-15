int setBit(int num, int bit, int valorBit){
        num &=  ~(0x01 << bit);
        num |= (valorBit << bit);
    return num;
}

int getBit(int num, int bit){
    return (num >> bit) & 0x01;
}


int main(void){
    unsigned int num = 0x0000;
    num = setBit(num, 0, 1);
    printf("0x%X \n", num);
    int bit_0 = getBit(num, 0);
    printf("%X \n", bit_0);
    num = setBit(num, 0, 0);
    bit_0 = getBit(num, 0);
    printf("%X \n", bit_0);
    return 0;
}