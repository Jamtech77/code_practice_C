#include "stdio.h"
#include <stdlib.h>

int *getrange(int *arr, int size, int target){
  int *ret_arr = (int *)malloc(2*sizeof(int));
  int i = 0;
  int first = -1, last = -1;
  /* Check if target in array */
  for(i=0;i<size;i++){
    if(target == arr[i]){
      if(first == -1) first = i;
      last = i;
    }
  }

  ret_arr[0] = first;
  ret_arr[1] = last;

  return ret_arr;
}

int main(void){
  int *ans = 0;

  int arr[] = {1,3,3,5,7,8,9,9,9,15};
  int len = sizeof(arr)/sizeof(arr[0]);

  ans = getrange(arr, len, 9);

  printf("[%d, %d]\n", ans[0], ans[1]);
  return 0;
}
