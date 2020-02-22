#include<stdio.h>

void merge_and_sort(int* nums1, int m, int* nums2, int n);

int main(void) {
    puts("Hello World!");
    int a[] = {3, 20, 31, 0, 0, 0, 0};
    int size_a = sizeof(a) / sizeof(a[0]);
    int b[] = {1, 5, 60, 80};
    int size_b = sizeof(b) / sizeof(b[0]);
    int i=0;
    
    merge_and_sort(a, (size_a - size_b), b, size_b);
    
    for(i=0;i<size_a;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}

void merge_and_sort(int* nums1, int m, int* nums2, int n) {
    int i = m-1;    //num1
    int j = n-1;    //num2
    int k = m+n-1;  //new num(total)
    
    while(i>=0 && j>=0){
        if(nums1[i] >= nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else if(nums1[i] < nums2[j]){
            nums1[k--] = nums2[j--];
        }
    }
    if(i<0){
        while(j>=0){
            nums1[k--] = nums2[j--];
        }      
    }
    if(j<0){
        while(i>=0){
            nums1[k--] = nums1[i--];
        }      
    }
    
}
