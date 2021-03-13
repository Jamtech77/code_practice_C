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
/*
1->2->3->4->5->NULL

1->2->4->3->5->NULL
*/

Node *SwitchNode(int k, Node *node){

    Node *temp = node;

    while(--k > 0){
        temp = temp->next;
        //k--;
        if(temp->next == NULL){
            printf("Out of range\n");
            return node;
        }
    }

    if(temp->next == NULL){
        printf("Out of range\n");
        return node;
    }

    Node *swap_tmp;
    Node *swap_tmp_dual;

    swap_tmp = temp->next;
    swap_tmp_dual = temp->next->next;

    temp->next = temp->next->next;
    swap_tmp->next = swap_tmp_dual->next;
    swap_tmp_dual->next = swap_tmp;


    return node;
}


int main(void){
    puts("Interview");

    Node *p = NULL;
    int i = 0;

    for(i=9;i>0;i--){
      p = CreateNode(i, p);
    }

    ShowNode(p);

    p = SwitchNode(1, p);
    ShowNode(p);

    return 0;
}
