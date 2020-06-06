#include "stdio.h"
#include <stdlib.h>

typedef struct Node_{
    int data;
    struct Node_ *next;
}Node;

Node *CreateNode(int data, Node *node){
    Node *x = malloc(sizeof(Node));
    x->data = data;
    x->next = node;
    return x;
}

void ShowNode(Node *Head){
    int c = 0;
    while (Head != NULL) {
        c++;
        printf("%d ", Head->data);
        Head = Head->next;
    }
    puts("");
    //printf("Node number = %d\n", c);
}

Node *OddEvenList(Node *node){
    Node *Odd = malloc(sizeof(Node));
    Node *Even = malloc(sizeof(Node));
    Node *OddHead = malloc(sizeof(Node));
    Node *EvenHead = malloc(sizeof(Node));
    int i = 0;

    OddHead = Odd;
    EvenHead = Even;

    while(node != NULL){
      i ^= 1;
      if(i == 1){ //Odd
        Odd->next = node;
        Odd = Odd->next;
      }else{  //Even
        Even->next = node;
        Even = Even->next;
      }

      node = node->next;
    }
    Even->next = NULL;
    Odd->next = EvenHead->next;
    return OddHead->next;
}

int main(void){
    puts("Interview");

    Node *p = NULL;
    int i = 0;

    for(i=9;i>0;i--){
      p = CreateNode(i, p);
    }

    ShowNode(p);

    p = OddEvenList(p);
    ShowNode(p);

    return 0;
}
