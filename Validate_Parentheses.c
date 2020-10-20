#include "stdio.h"
#include <stdlib.h>

#define CIR_BRACKET_L '('
#define CIR_BRACKET_R ')'
#define CURLY_BRACKET_L '{'
#define CURLY_BRACKET_R '}'
#define SQUARE_BRACKET_L '['
#define SQUARE_BRACKET_R ']'

int mapping_bracket(char a, char b){  // True or False
    if(a == CIR_BRACKET_L){
        if(b == CIR_BRACKET_R) return 1;
    } else if (a == CURLY_BRACKET_L){
        if(b == CURLY_BRACKET_R) return 1;
    } else if (a == SQUARE_BRACKET_L){
        if(b == SQUARE_BRACKET_R) return 1;
    } else {
        return 0;
    }
}

int isValid(char *str){
    int ret = 0;
    int len = 0;
    int index = 0;
    
    while(*(str + len) != '\0'){
        len++;
    }
    printf("%d\n", len);
    
    char *stack = (char *)malloc(sizeof(char) * len);
    
    for(int i = 0; i < len; i++){
        if( mapping_bracket(str[i], stack[index]) ){
            // stack_pop()
            stack[index] = '\0';
            index -= 1;
            if(index <= 0) index = 0;
        } else {
            // Stack_Append
        }
    }
    
    // Is stack empty?
    
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
    char *str5 = "[{]}()";  //False
    char *str6 = "[[[[[]]";  //True
    
    // isValid("()[]{}");
    // 
    // // printf("%d\n", '('^')');
    // // printf("%d\n", '['^']');
    // // printf("%d\n", '{'^'}');

    
    return 0;
}
