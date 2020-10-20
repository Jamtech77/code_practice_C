#include "stdio.h"

#define CIR_BRACKET_L '('
#define CIR_BRACKET_R ')'
#define CURLY_BRACKET_L '{'
#define CURLY_BRACKET_R '}'
#define SQUARE_BRACKET_L '['
#define SQUARE_BRACKET_R ']'


int isValid(char *str){
    int ret = 0;
    int len = 0;
    
    while(*(str + len) != '\0'){
        len++;
    }
    printf("%d\n", len);
    
    for (int i = 0; i < len; i++) {
      printf("%d\n", str[i]);
    }
    
    
    
    return ret;
}

// ( 101000
// ) 101001
// [ 1011011
// ] 1011101
// { 1111011
// } 1111101
// Check 0 bit is 0 or 1 -> ()
// Check 5 bit is 0 -> []
// Check 5 bit is 1 -> {}

int main(void) {
    char *str1 = "(((())))";  //True
    char *str2 = "[]{}()";  //True
    char *str3 = "[()]{}";  //True
    char *str4 = "({[)]";  //False
    char *str2 = "[{]}()";  //False
    
    isValid("()[]{}");
    
    printf("%d\n", '('^')');
    printf("%d\n", '['^']');
    printf("%d\n", '{'^'}');
    
    return 0;
}
