#include "stdio.h"

/* Brute force solution */
int isTroplets(int *arr, int size){
    int i = 0, j = 0, k = 0;

    for ( i = 0; i < size; i++) {
        for ( j = i + 1; j < size; j++) {
            for ( k = j + 1; k < size; k++) {
                int a = arr[i] * arr[i];
                int b = arr[j] * arr[j];
                int c = arr[k] * arr[k];

                if( a == b + c || b == a + c || c == a + b){
                    return 1;
                }
            }
        }
    }

    return 0;
}

int main(void) {

  // {3, 5, 12, 5, 13}
  int arr[] = {3, 1, 4, 6, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", isTroplets(arr, size));

  return 0;
}
