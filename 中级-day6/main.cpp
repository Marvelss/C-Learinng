#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 5
typedef int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int top;
}SqStack;
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;

void initSqStack(SqStack &S) {
	S.top= -1;
}
bool StackEmpty(SqStack S){
	if (S.top == -1) {
		return true;
	}
	return false;
}
void Push(SqStack& S, ElemType x) {
	if (S.top == MaxSize - 1) {
		return;
	}
	S.data[++S.top] = x;
}
void PrintStack(SqStack S) {
	if (StackEmpty(S)) {
		return;
	}
	while (!StackEmpty(S))
	{
		printf("%2d",S.data[S.top--]);
	}
	printf("\n");

}
ElemType getTop(SqStack S, ElemType& x) {
	if (StackEmpty(S)) {
		return 0;
	}
	x = S.data[S.top--];
	return x;
}


void initSqQueue(SqQueue &Q) {
	Q.front = Q.rear = 0;
}
bool isEmpty(SqQueue Q) {
	if (Q.front = Q.rear) {
		return true;
	}
	return false;
}
bool Push1(SqQueue &Q, ElemType x) {
	if ((Q.rear + 1) % MaxSize == Q.front) {
		return false;
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;

}
bool GetSqQueue(SqQueue &Q,ElemType &x) {
	if (Q.front == Q.rear) {
		return false;
	}
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}


int main()
{
	bool flag;
	SqStack S;
	initSqStack(S);
	ElemType o, p, q, x, y, z, h, e;
	scanf("%d%d%d", &o, &p, &q);
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	scanf("%d", &h);
	scanf("%d", &e);
	Push(S, o);
	Push(S, p);
	Push(S, q);
	PrintStack(S);
	bool ret;
	SqQueue Q;
	
	ElemType output;
	initSqQueue(Q);
	int i = 0;
	int j = 0;
	

	ret = Push1(Q, x);
	ret = Push1(Q, y);
	ret = Push1(Q, z);
	ret = Push1(Q, h);
	ret = Push1(Q, e);
		if (!ret) {
			printf("false\n");
		}
	while (j < 4)
	{
		ret = GetSqQueue(Q, output);
		if (ret) {
			printf("%2d",output);
		}
		j++;

	}
	
	
	return 0;
}