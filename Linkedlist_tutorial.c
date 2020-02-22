#include<stdio.h>
#include<stdlib.h>

struct _Node{
    int data;
    struct _Node *next;
};

typedef struct _Node Node;

Node* NewNode (int data, Node *pNext){
    data = 0;
    pNext = NULL;
    Node x = {data, pNext};
    Node *p = (Node *)malloc(sizeof(Node));
    *p = x;
    return p;
}

void ShowNode(const Node* p);

int main(void) {
    puts("Hello World!");
    int i;
    // Creation
    Node *pHead = NULL;
    for(i=4;i>=0;i--){
        pHead = NewNode(i, pHead);
    }

    // Output
    Node *p = pHead;
    while(p != NULL){
        ShowNode(p);
        p = p->next;
    }
    
    // delete all
    p = pHead;
    while(p != NULL){
        Node *pTmp = p;
        p = p->next;
        free(pTmp);
    }
    
    return 0;
}

void ShowNode(const Node* p){
    printf("%d\n", p->data);
}



