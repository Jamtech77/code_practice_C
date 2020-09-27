#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    for ( i = 0; i < numsSize; i++) {
        if(target <= nums[i]){
            return i;
        }
    }
    return numsSize;
}

int main(void) {
    puts("Hello World!");
    int n[] = {1,3,5,6,9};
    int size = sizeof(n);
    
    printf("%d\n", searchInsert(n, size, 7));
    return 0;
}
