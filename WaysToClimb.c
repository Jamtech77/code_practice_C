#include "stdio.h"

unsigned int Factorial(int n){
    if(n != 0){
        return n * Factorial(n-1);
    } else {
        return 1;
    }    
}

int Combination(int n, int k){
    return Factorial(n) / ( Factorial(k)* Factorial(n-k) );
}

int staircase(unsigned int n) {
    int comb = 0;
    
    if(n==0) return -1;
    if(n==1) return 1;
    if(n%2 == 0)
        goto Even;
    else
        goto Odd;

Odd:    
    // Is Odd
    for(int i=1;i<=(n-1)/2;i++){
        comb += Combination(n-i, i);
    }
    return comb + 1;
Even:    
    // Is Even
    for(int i=1;i<=(n/2-1);i++){
        comb += Combination(n-i, i);
    }
    return comb + 2;
}


int main(void) {
    
    printf("%d\n", staircase(4)); //5
    printf("%d\n", staircase(5)); //8

    return 0;
}
