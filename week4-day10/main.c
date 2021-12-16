#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


change(int i) {
	printf("%d", i/2);
}

int main()
{
	int i;
	scanf("%d",&i);
	change(i);
	
	return 0;
}