#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;
LinkList CreateList(LinkList& L) {
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 0)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}
LinkList CreateList1(LinkList& L) {
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r = L;
	scanf("%d", &x);
	while (x != 0)
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
	while (L != NULL)
	{
		printf("%3d", L->data);//打印当前结点数据
		L = L->next;//指向下一个结点
	}
	printf("\n");
}
LinkList getElem(LinkList L,int x) {
	LNode* p = L->next;
	int j=1;
	if (x == 0) {
		return L;
	}if (x < 1) {
		return NULL;
	}while (p&& j<x)
	{
		p = p->next;
		j++;
	}
	return p;
}
LinkList InsertLinkList(LinkList L,int x,ElemType data) {
	LinkList search = getElem(L, x - 1);
	if (search==NULL)
	{
		return L;
	}
	LNode* p = (LinkList)malloc(sizeof(LNode));
	
	p->data = data;
	p->next = search->next;
	search->next = p;
	return L;
}
bool DeleteLinkList(LinkList L, int x) {
	
	LinkList search = getElem(L, x-1);
	if (search == NULL) {
		return false;
	}
	search->next = search->next->next;
	free(search->next);
	search->next == NULL;
	return true;
}
int main()
{
	LinkList L;
	CreateList1(L);
	PrintList(L);
	
	LinkList search = getElem(L,2);
	printf("%d\n", search->data);
	InsertLinkList(L,2,81);
	PrintList(L);
	DeleteLinkList(L, 3);
	PrintList(L);
	return 0;
	
}