#include<stdio.h>

int size_of_a = 0;

int arra(int *a ){
    int harshtable[200001] = {0};
    int kinds = 0;
    int i = 0;
    for(i=0; i<size_of_a; i++){
        if( ++harshtable[ a[i] + 100000 ] == 1){
            kinds += 1;
        }
    }
    return (kinds <= size_of_a / 2) ? kinds : size_of_a / 2;

}

int main(void) {
    puts("Hello World!");
    int x[10] = {1,1,2,2,2,2,4,4,4,4};
    size_of_a = sizeof(x) / sizeof(int);
    
    printf("%d\n", arra(&x[0]));
    
    return 0;
}
