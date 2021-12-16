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
	while (x != 9999)
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
LinkList getEle(LinkList L,int i) {
	LNode* p = L->next;
	int j = 1;
	if (i == 0) {
		return L;
	}if (i < 1) {
		return NULL;
	}
	while (p&&j<i)
	{
		p = p->next;
		j++;
	}
	return p;
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
bool ListInsert(LinkList L,int i,ElemType data) {
	LinkList q = getEle(L, i - 1);
	if (q == NULL) {
		return false;
	}
	LinkList  p = (LinkList)malloc(sizeof(LNode));
	p->data = data;
	p->next = q->next;
	q->next = p;
	return true;
}
bool ListDelete(LinkList L, int i) {
	LinkList s = getEle(L, i - 1);
	if (NULL == L) {
		return false;
	}
	LinkList q = s->next;
	s->next = q->next;
	free(q);
	q = NULL;
	return true;

}
int main()
{
	LinkList L;
	CreateList1(L);
	//PrintList(L);
	LinkList search = getEle(L, 2);
	printf("%d\n", search->data);
	ListInsert(L,2,99);
	PrintList(L);
	ListDelete(L, 4);
	PrintList(L);
	return 0;
}