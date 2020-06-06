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
    strx = temp;

    if( (len - i) < num ){
        printf("Error\n");
        return NULL;
    }

    while (*str != '\0') {
        if(*str == c) {
            str = str + (num-1);
        } else {
            *temp = *str;
            temp++;
        }
        str++;
    }

    return strx;
  }

int main(void) {
    char *str = "123456789abcdefg";
    char *a = erasechar(str, 7, 5);

    printf("%s\n", str);
    printf("%s\n", a);

    return 0;
}
