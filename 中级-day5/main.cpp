#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode* next;

}LNode,*LinkList;
LinkList CreateList(LinkList &L) {
	LNode* s; 
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x!=0)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;

}
LinkList CreateList1(LinkList &L) {
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, *r=L;
	scanf("%d", &x);
	while (x!=0)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}
void PrintList(LinkList L) {
	L = L->next;
	while (L!=NULL)
	{
		printf("%2d", L->data);
		L = L->next;
	}
	printf("\n");
}

int main()
{
	LinkList L;
	CreateList1(L);
	PrintList(L);
}