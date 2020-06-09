#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char *reverseString(char* str) {
    int len = strlen(str);
    char *temp = malloc(sizeof(char) * len);

    while (*str != '\0') {
        *(temp + len-1) = *str;
        str++;
        len--;
    }

    return temp;
}

int main(void) {
    puts("Hello World!");

    char *s = "123456789";
  	puts(s);

    s= reverseString(s);
    puts(s);

    return 0;
}
