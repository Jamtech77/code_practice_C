#include "stdio.h"
#include "stdlib.h"

/*
  You are given an array of integers in an arbitrary order. Return whether
  or not it is possible to make the array non-decreasing by modifying at most
  1 element to any value.
  Example:
  print check([13, 4, 7])
  # True
  print check([5,1,3,2,5])
  # False
*/

char *check(int *arr, int size){
  int i = 0;
  int inc_count = 0;
  char *t = "True";
  char *f = "False";

  for(i=0;i<(size-1);i++){
      if(arr[i] > arr[i+1]) inc_count++;
  }

  if (inc_count > 1) return f;
  else return t;
}

int main(void){
    puts("Hello World!");
    int arr[] = {13, 4, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Check non-decreasingArray? %s\n", check(arr, size));
    return 0;
}
