#include "stdio.h"

#define SIZE 10
void bubble(int arr[]);

int main(void){
    int C[SIZE] = {3, 5, 7, -2, 4, 8, 7, 6, 8, 10};
    bubble(C);

    for (int i = 0; i < 10; ++i)  printf("%d ", C[i]);
    printf("\n");
    getchar();

    return 0;
}

void bubble(int arr[]){
    int i = 0, j = 0, temp = 0;

    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
