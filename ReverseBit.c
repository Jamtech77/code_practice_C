#include<stdio.h>
#include<stdint.h>

uint32_t reverseBits(uint32_t n) {
    int m=0;
    int i=0;
    
    for(i=0;i<32;i++){
        m |= ((n&1) << (31-i));
        n >>= 1;
    }
    
    return m;
}

int main(void) {
    puts("Hello World!");
    unsigned int x=43261596;
    
    printf("%u",reverseBits(x));
    return 0;
}

