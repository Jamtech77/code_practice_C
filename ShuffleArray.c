#include "stdio.h"
#include "time.h"
#include "stdlib.h"

void Shuffle(int **arr, int size){
    srand(time(NULL)); //Use random
    for(int c=0;c<100;c++){ //Shuffle 100 times
        int n1 = rand()%size;		//Generate 0-9 random number
        int n2 = rand()%size;

        /* Randomly Swap two elements for 100 rounds */
        int temp = (*arr)[n1];
        (*arr)[n1] = (*arr)[n2];
        (*arr)[n2] = temp;
    }
}

int main(void) {
  	int x[10] = {0};
    int size = sizeof(x)/sizeof(x[0]);
  	for(int i=0;i<size;i++) {
  		  x[i] = i;
  	}
    int *ptr = x;

    Shuffle(&ptr, size);

  	for(int i=0;i<size;i++){
  		  printf("%d\n",x[i]);
  	}
    return 0;
}
