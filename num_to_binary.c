#include<stdio.h>

void binarycode(unsigned int num){
    int m;
    int c = 0;
    int i;
    unsigned int temp = num;
    unsigned int flag = 1;

    while(temp > 0){
        m = temp % 2;
        temp = temp >> 1;
        c++;    //記錄短除法次數
    }

    flag = flag << (c-1);

    while(flag > 0){
        if((num & flag) != 0) printf("1");
        else printf("0");
        flag = flag >> 1;
    }
}

int main(void) {
    puts("Hello World!");
    binarycode(4294567295);
    return 0;
}
