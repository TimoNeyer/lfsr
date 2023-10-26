#include <stdio.h>
#include <stdint.h>


int lfsr_gaus(uint8 value, int tabs[5]){
    unsigned int shift_mask = 128;
    int max_bit = 8;
    int mod 256;
    uint8 check = value;
    unsigned int res = 0;
    do {
        unsigned int out = (lfsr & 1) << (max_bit-1);
        out ^= lfsr & shift_mask;
        res |= (out >> (max_bit-1)) << c;
        value >>= 1;
        value |= out;
        value %= mod;
    } while (check != value);
    return 0;
}

int main(){
    for (int i = 1; i<256; i++){
        other_option(i);
    }
    return 0;
}

unsigned int lfsr_raw(uint8 value){
	int shift_mask = 128;
	int max_bit = 8;
	int mod = 256;
	uint8 check = value;
	unsigned int res = 0;
	do {
		unsigned int out = ;
		//
		//
	}while (value != check);
	return res;
}

unsigned int lfsr_fibonnaci(uint8 value, int tabs[5]){
	int shift_mask = 128;
	int max_bit = 8;
	int mod = 256;
	uint8 check = value;
	unsigned int res = 0;
	do {
		unsigned int out =;
		for (int a = 0; tabs[a] && a < 5; a++){
			out ^= value & tab[a];
		//
		//
		}
	} while (value != check);
	return res;
}

