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
    while (Head != NULL) {
        printf("%d ", Head->data);
        Head = Head->next;
    }
}
/*

p1 1->2->3->4->5->NULL
p2 1->2->3->NULL

p1 1->2->3->4->5 -> p2 1->2->3->NULL

*/
Node *AddTwoList(Node *p1, Node *p2){
    Node *temp = p1;

    do{
        temp = temp->next;
    }while(temp->next != NULL);
    temp->next = p2;

    return p1;
}


int main(void){
    puts("Hello World!");

    Node *p1 = NULL;
    Node *p2 = NULL;
    int i = 0;

    for(i=9;i>0;i--){
      p1 = CreateNode(i, p1);
    }

    ShowNode(p1);

    for(i=5;i>0;i--){
      p2 = CreateNode(i, p2);
    }

    ShowNode(p2);

    p1 = AddTwoList(p1, p2);
    ShowNode(p1);

    return 0;
}
