#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int start(int i) 

{
	if (i == 1 || i == 2) {
		return i;
	}
	
	return start(i-1)+start(i-2);
}

int main()
{

	int n;
	scanf("%d", &n);
	int result =start(n);
	printf("%d", result);

}