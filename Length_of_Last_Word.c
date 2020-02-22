#include<stdio.h>
#include<string.h>

int lengthOfLastWord(char* s);

int main(void) {
    puts("Hello World!");
    int n[] = {1, 3, 5, 6, 9};
    
    char *s = "hello 555s5s5ss";
    
    printf("%d", lengthOfLastWord(s));

    return 0;
}

int lengthOfLastWord(char* s) {
    int i=0;
    int size = strlen(s);
    int index=0;
    
    for(i=0;i<size;i++){
        if( (s[i-1] == ' ') && (s[i] != ' ')   ){
            index = i;
        }
    }
    
    return size - index;
}
