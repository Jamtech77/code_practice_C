#include "stdio.h"
#include <string.h>
#include <stdlib.h>

/*
    https://leetcode.com/problems/remove-k-digits/
*/

/*
    Thinking:
    從最高位開始走訪， 因為我們要取最小值（題目要求） ，所以只要高一位數字
    比自己還要大，如果還可以移除 (k > 0) 我們就移除高一位的數字
*/

/*
  str: input string
  i: Delete character from i
  num: Delete Numbers of characters
*/
char *erasechar(char *str, int i, int num){
    int len = strlen(str);
    char *temp = (char *)malloc(sizeof(char)*(len-num));
    char c = str[i];
    char *strx = (char *)malloc(sizeof(char)*(len-num));
    int Del = 0;

    strx = temp;

    if(num == 0) return str;

    if( (len - i) < num ){
        printf("Error\n");
        return str;
    }

    while (*str != '\0') {
        if(*str == c && Del == 0) {
            str = str + (num-1);
            Del = 1;  // Avoid Duplicate case
        } else {
            *temp = *str;
            temp++;
        }
        str++;
    }
    *temp = '\0';

    return strx;
}

char *removeKdigits(char *str, int k){
    int len = strlen(str);
    int i = 0;
    char *temp = (char *)malloc(sizeof(char)*(len));
    int s = 0;

    temp = str;

    while (k > 0) {
        len = strlen(temp);
        i = 0;

        while (i+1 < len && temp[i] <= temp[i+1]) {
            i++;
        }
        temp = erasechar(temp, i, 1);
        k--;
    }

    while (s < (strlen(temp)-1) && temp[s] == '0') {
      s++;
    }
    temp = erasechar(temp, 0, s);

    return (*temp == '\0') ? "0" : temp;
}


int main(void) {
    char *str = "1432219";

    str = removeKdigits(str, 3);

    printf("%s\n", str);

    return 0;
}
