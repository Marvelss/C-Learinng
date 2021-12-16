#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int len;
	scanf("%d", &len);
	int a[101];
	int real=0;
	for (int i = 0; i < len; i++) {
		scanf("%d",&a[i]);
	}
	for (int j = 0; j < len; j++)
{
		if (a[j] == 2) {
			real++;
		}
}
	printf("%d", real);



}