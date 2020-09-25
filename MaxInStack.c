#include "stdio.h"
#include "stdlib.h"

#define STACK_SIZE 8

typedef struct MaxStack_{
  int top;
  unsigned int size;
  int array[STACK_SIZE];
  int Max[STACK_SIZE];
}MaxStack;

void pop(MaxStack *s) {
    if(s->top < 0){ //Is EMPTY
        printf("Stack is EMPTY\n");
    } else {
        s->top--;
    }
}

void push(MaxStack *s, int data) {
    if(s->top >= (int)s->size-1){ //is Full
        printf("Stack is FULL!\n");
    } else {
        printf("Push number %d\n", data);
        s->top++;
        s->array[s->top] = data;

        if(s->top == 0){  //First element
            s->Max[s->top] = data;
            return;
        }

        if(data > s->Max[s->top-1]){
            s->Max[s->top] = data;
        } else {
            s->Max[s->top] = s->Max[s->top-1];
        }
    }
}

void getmax(MaxStack *s){
    printf("Max is %d \n", s->Max[s->top]);
}

void peep(MaxStack *s) {
    int i = 0;
    if(s->top < 0){
        printf("Stack is EMPTY!\n");
    } else {
        for(i=0;i<=s->top;i++){
            printf("%d\n", s->array[i]);
        }
    }
}

int main(void){
    MaxStack *stack = malloc(sizeof(MaxStack));
    stack->top = -1; //Empty
    stack->size = STACK_SIZE;

    push(stack, 1);
    push(stack, 2);
    push(stack, 6);
    push(stack, 12);
    push(stack, 8);
    push(stack, 7);
    push(stack, 9);
    push(stack, 3);
    push(stack, 4);
    peep(stack);
    getmax(stack);
    
    pop(stack);
    pop(stack);
    pop(stack);
    peep(stack);
    getmax(stack);

    return 0;
}
