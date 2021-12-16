#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a;
	int row_a;
	int b=0;
	scanf("%d", &a);
	row_a = a;
	while (a)
	{
		b = b * 10 + a % 10;
		a = a / 10;
	}
	if (row_a == b) {
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}