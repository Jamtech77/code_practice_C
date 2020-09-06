#include "stdio.h"
#include "stdlib.h"

typedef struct MaxStack_{
  int top;
  unsigned capacity;
  int* array;
  int Max;
  void (*push)(int x);
  void (*pop)(void);
  int (*getmax)(void);
}MaxStack;

int pop(MaxStack *s) {

}

int push(MaxStack *s, int data) {


}

int max(MaxStack *s){

}


int main(void){


    return 0;
}
