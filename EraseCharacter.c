#include "stdio.h"
#include <string.h>
#include <stdlib.h>

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

    int n = 0;

    strx = temp;

    if(num == 0) return str;
    if(i > len) {
        printf("Size Error\n");
        return str;
    }

    if( (len - i) < num ){
        printf("Size Error\n");
        return str;
    }

    for(n = 0 ; n < i ; n++){
        *temp = *str;
        temp++;
        str++;
    }

    str = str + num;

    while (*str != '\0') {
        *temp = *str;
        temp++;
        str++;
    }

    *temp = '\0';

    return strx;
}

int main(void) {
    char *str = "1222226789abcdefg";
    char *a = erasechar(str, 30, 10);

    printf("Before: %s\n", str);
    printf("After : %s\n", a);

    return 0;
}
