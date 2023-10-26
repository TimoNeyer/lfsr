#include <stdio.h>

int lfsr_gaus(unsigned int lfsr){
    unsigned int shift_mask = 128;
    int max_bit = 8;
    unsigned  int value = lfsr;
    unsigned int c = 0;
    unsigned long int res = 0;
    do {
        unsigned  int out = (lfsr & 1) << (max_bit-1);
        out ^= lfsr & shift_mask;
        res |= (out >> (max_bit-1)) << c;
        lfsr >>= 1;
        lfsr |= out;
        lfsr %= 256;
        c++;
    } while (lfsr != value);
    return 0;
}

int main(){
    for (int i = 1; i<256; i++){
        other_option(i);
    }
    return 0;
}
