#include<stdio.h>
#include<stdlib.h>

 struct ListNode {
     int val;
     struct ListNode *next;
 };

ListNode* NewNode (int data = 0, ListNode *pNext = NULL){
    ListNode x = {data, pNext};
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    *p = x;
    return p;
}

void ShowNode(const ListNode* p){
    printf("%d\n", p->val);
}
 
struct ListNode* reverseList(struct ListNode* head) {
	ListNode *newhead = NULL;
	ListNode *Temp = NULL;
	while(head != NULL){
		//ListNode *Temp = head->next;
		Temp = head->next;
		head->next = newhead;
		newhead = head;	//�������}�e���s���I�A��Ӹ`�I�h��(�P�ɤ�����data�]�@�ַh��)
		head = Temp;	//�Ө������U�@�Ӹ`�I����}

	}
	return newhead;
}
 
/* Recursion */ 
struct ListNode* reverseList_2(struct ListNode* head) {
	ListNode *newhead = NULL;
	ListNode *Temp = NULL;
	if(head == NULL || head->next == NULL) return head;
	newhead = reverseList_2(head->next);
	head->next->next = head;
	head->next = NULL;

	return newhead;
}

int main(void) {
	puts("Hello World!");
	int i;
	
	// Create Node
	ListNode *pHead = NULL;
	for(i=4;i>=0;i--){
		pHead = NewNode(i, pHead);
	}

	ListNode *p = pHead;

	while(p != NULL){
		ShowNode(p);
		p = p->next;
	}
	printf("\n");


	p = reverseList(pHead);
	//p = reverseList_2(pHead);

	while(p != NULL){
		ShowNode(p);
		p = p->next;
	}

	return 0;
}
