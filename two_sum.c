#include "stdio.h"
#include "stdlib.h"


void show_map(int *map, int size){
  int i = 0;
  // int size = sizeof(map);
  for(i=0;i<size;i++){
    printf("%d ", map[i]);
  }
  puts("");
}

int* twoSum(int* nums, int numsSize, int target) {
    int *rst = (int *) calloc(2, sizeof(int));
    int max = INT_MIN, min = INT_MAX;
    int i;

    // Set Hash table size by Maximum and minimum
    for(i = 0; i < numsSize; i++){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
    }

    int *map = (int *) calloc(max - min + 1, sizeof(int));

    // printf("%d\n", max - min + 1);
    // printf("%d\n", sizeof(map));
    // show_map(map);

    int lookingNum = 0;
    for(i = 0; i < numsSize; i++){
        show_map(map, max - min + 1);
        lookingNum = target - nums[i];
        printf("lookingNum = %d\n", lookingNum);
        if(lookingNum >= min && lookingNum <= max){ // filter
            printf("lookingNum - min = %d\n", lookingNum - min);
            if(map[lookingNum - min] > 0){
                rst[0] = map[lookingNum - min] - 1;
                rst[1] = i;
                break;
            } else {
                printf("nums[i] - min = %d\n", nums[i] - min);
                map[nums[i] - min] = i + 1;
            }

        }
    }

    return rst;
}

// nums[i] - min是希望將數字拉到正號，以塞進hash table內

int main(void) {
  /* code */
  int *ret = 0;
  int nums[5] = {4,7,1,-3,2};

  ret = twoSum(nums, 5, 3);

  printf("%d %d\n", ret[0], ret[1]);

  return 0;
}
