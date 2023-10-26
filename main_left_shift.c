#include "stdio.h"
#include <stdlib.h>
#include <stdint.h>


unsigned int lfsr_gaus(uint8 value, int tabs[5]) {
	int shift_mask = 128;
	int max_bit = 8;
 	int mod = 256;
	value %= mod;
 	uint8 check = value;
 	unsigned int res = 0;
 	do {
    		unsigned int out = (value & shift_mask) >> (max_bit - 1);
		out ^= value & 1;
		for (int a = 0; tabs[a] && a < 5; a++) {
			value ^= out << tabs[a];
		}
		value <<= 1;
		value |= out;
		value %= 256;
		res <<= 1;
		res |= out;
  	} while (value != check);
  	return res;
}
 
unsigned int lfsr_raw(uint8 value){
	int shift_mask = 128;             
        int max_bit = 8;                  
        int mod = 256;                    
        uint8 check = value;      
        unsigned int res = 0;            
        do {    
		unsigned int out = (value & shift_mask) >> (max_bit - 1);
		out ^= value & 1;                 
		value <<= 1;                      
		value |= out;                     
		value %= 256;                     
		res <<= 1;                        
		res |= out;                       
        } while (value != check);         
        return res;
 } 

unsigned int lfsr_fibonacci(uint8 value, int tabs[5]){
	int shift_mask = 128;
	int max_bit = 8;
	int mod = 25;
	value %= mod;
	uint8 check = value;
	unsigned int res = 0;
	do {
		unsigned int out = (value & shift_mask) >> (max_bit - 1);
		for (int a = 0; tabs[a] && a < 5; a++){
			out ^= value & tab[a];
		out ^= value & 1;
		value <<= 1;
		value |= out;
		value %= mod;
		res <<= 1;
		res |= out;
	} while (value != check);
	return res;

