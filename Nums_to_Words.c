#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int numToDigit(int num);
char* IntToString(int num);
char* digitToWord(int *num);

int main(void) {
    puts("Hello World!");
    int n = 4573;
    char *r = (char*)calloc( 1024 , sizeof(char));
    r = IntToString(n);
    
    puts(r);
    
    return 0;
}

int numToDigit(int num){
    int n = num;
    int d = 0;
    while(n > 0){
        n /= 10;
        d++;
    }
    return d;
}

char* IntToString(int num) {
    char *r = (char*)calloc( 1024 , sizeof(char));
    int d = numToDigit(num);  //幾位數
    int n = num;
    while(d > 1){
        if(d == 4){
            n = (num / 1000) %10;
            strcat(r, digitToWord(&n));
            strcat(r, "thousand ");
        }
        
        if(d == 3){
            n = (num / 100) %10;
            strcat(r, digitToWord(&n));
            strcat(r, "hundred ");
        }
        if(d == 2){
            n = num%100;
            
            if(n < 20){
                strcat(r, digitToWord(&n));
            } else{
                n = (n/10) * 10;
                strcat(r, digitToWord(&n));
                n = num%10;
                strcat(r, digitToWord(&n));
            }                
        }     
        d--;
    }
   
    return r;
}

char* digitToWord(int *num) {
    switch(*num) {
        case 90:  return "Ninety ";
        case 80:  return "Eighty ";
        case 70:  return "Seventy ";
        case 60:  return "Sixty ";
        case 50:  return "Fifty ";
        case 40:  return "Forty ";
        case 30:  return "Thirty ";
        case 20:  return "Twenty ";
        case 19:  return "Nineteen ";
        case 18:  return "Eighteen ";
        case 17:  return "Seventeen ";
        case 16:  return "Sixteen ";
        case 15:  return "Fifteen ";
        case 14:  return "Fourteen ";
        case 13:  return "Thirteen ";
        case 12:  return "Twelve ";
        case 11:  return "Eleven ";
        case 10:  return "Ten ";
        case 9:  return "Nine ";
        case 8:  return "Eight ";
        case 7:  return "Seven ";
        case 6:  return "Six ";
        case 5:  return "Five ";
        case 4:  return "Four ";
        case 3:  return "Three ";
        case 2:  return "Two ";
        case 1:  return "One ";
        case 0:  return "Zero ";
        default: return "Error";
    }
}
