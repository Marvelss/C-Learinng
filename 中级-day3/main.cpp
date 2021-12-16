#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int length;
}ArrList;
void printList(ArrList &L) {
	for (int i = 0; i < L.length; i++) {
		printf("%3d", L.data[i]);
	}
	printf("\n");
}
bool insertList(ArrList& L, ElemType e, int index) {
	if (index<1 || index>L.length+1) {
		return false;
	}
	if (L.length >= MaxSize) {
		return false;
	}

	for (int i = L.length; i >=index;i--) {
		L.data[i] = L.data[i - 1];
	}
	L.data[index - 1] = e;
	L.length++;
	return true;
}
bool deleteList(ArrList& L, int index) {
	if (index<1 || index>L.length) {
		return false;
	}
	for (int  i = index-1; i < L.length-1; i++)
	{
		L.data[i] = L.data[i + 1];
	}
	L.length--;
	return true;
}
int main()
{
	ArrList list;
	list.data[0] = 1;
	list.data[1] = 2;
	list.data[2] = 3;
	list.length = 3;
	//printList(list);
	int e,index;
	scanf("%d%d", &e, &index);
	if (insertList(list, e, 2)){
		printList(list);
	}
	else
	{
		printf("false");
	}
	if (deleteList(list, index)) {
		printList(list);
	}
	else
	{
		printf("false");
	}
	
	return 0;
}