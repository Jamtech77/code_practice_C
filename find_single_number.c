#include<stdio.h>

int singleNumber(int* nums, int numsSize);

int main(void) {
    puts("Hello World!");
    int arr[] = {1,20,20,1,2,12,12};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
   
    printf("%d",singleNumber(arr, size_arr));

    return 0;
}

// A XOR A = 0 
// A XOR B XOR A = (A XOR A) XOR B = 0 XOR B = B
// N XOR 0 = N(itself)
// B is revealed through identity, as it has no pair of itself to cancel out.
int singleNumber(int* nums, int numsSize) {
    int n = 0;
	int i = numsSize-1;
    while(i >=0 ){
        n ^= nums[i];
        i--;
    }
    return n;
}
