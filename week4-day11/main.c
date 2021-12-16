#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	
	int n;
	scanf("%d", &n);
	char* p;
	char a;
	char str1[10];
	p = malloc(n);
	scanf("%c", &a);
	gets(str1);
	strcpy(p, str1);
	puts(p);

}