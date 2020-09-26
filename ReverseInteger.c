#include<stdio.h>
#include "stdlib.h"

int reverse(int x) {
    int result = 0;
    int pop = 0;
    
    while(x > 0){
        pop = x % 10;
        x /= 10;
        
        // Why 7? because INTMAX = 2147483647 in 32-bit, we need to make sure the unit digit must not be higher than 7.
        if (result > INT_MAX/10 || (result == INT_MAX / 10 && pop > 7)) return 0;	
        if (result < INT_MIN/10 || (result == INT_MIN / 10 && pop < -8)) return 0;
        result = result*10 + pop;
    }
    
    return result;
    
}

int main(void) {
    puts("Hello World!");
    int i = 1356987;   
    
    printf("%d -> %d",i,reverse(i));
    return 0;
}
