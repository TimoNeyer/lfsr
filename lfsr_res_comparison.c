#include <stdio.h>


int iteration(unsigned  int lfsr){
    int shift_mask = 128;
    int max_bit = 8;
    lfsr = lfsr % 256;
    unsigned  int value = lfsr;
    int c = 0;
    unsigned int res = 0;
    do {
        unsigned  int out = (lfsr & shift_mask)>> (max_bit-1);
        out ^= lfsr & 1;
        res <<= 1;
        lfsr <<= 1;
        lfsr |= out ;
        lfsr %= 256;
        c++;
        res |= out;
    } while (lfsr != res);
    if (res == value) printf("\n%d\n", value);
    printf("%d::%d\n", value, res);
    return 0;
}


int main(){
    for (int i = 1; i<256; i++){
        iteration(i);
    }
    return 0;
}
