#include<stdio.h>
#include<stdlib.h>

struct _ListNode {
    int val;
    struct _ListNode *next;
};

typedef struct _ListNode ListNode;
 
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    if(l1 == NULL && l2 == NULL) return NULL;
    	
    ListNode *head = NULL;
    //先比大小，小的當頭
    if(l1->val > l2->val){
        head = l2;
        l2 = l2->next;
    } else{
        head = l1;
        l1 = l1->next;
    }
    ListNode *cur = head;

    while(l1 != NULL && l2 != NULL){
        if(l1->val > l2->val){
            cur->next = l2;
            l2 = l2->next;
        } else{
            cur->next = l1;
            l1 = l1->next;
        }
        cur = cur->next;
    }
    
    if(l1 != NULL) cur->next = l1;
    else cur->next = l2;
    
    return head;
}

ListNode* NewNode (int data, ListNode *pNext){
    ListNode x = {data, pNext};
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    *p = x;
    return p;
}

void ShowNode(const ListNode* p){
    printf("%d ", p->val);
}

void show_list(const ListNode* p){
    while(p != NULL){
        ShowNode(p);
        p = p->next;
    }
}

int main(void) {
    puts("Hello World!");
    int i;
    ListNode *pHead1 = NULL;
    ListNode *pHead2 = NULL;
    ListNode *p = NULL;

    for(i=4;i>=1;i--) pHead1 = NewNode(i, pHead1);
    printf("P1: ");
    show_list(pHead1);
    printf("\n");
    
    for(i=10;i>=8;i--) pHead2 = NewNode(i, pHead2);
    printf("P2: ");
    show_list(pHead2);
    printf("\n");

    p = mergeTwoLists(pHead1, pHead2);

    while(p != NULL){
        ShowNode(p);
        p = p->next;
    }

    return 0;
}
