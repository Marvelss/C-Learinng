#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "seqstack.h"

int main() {
	char arr[10];
	scanf("%s", &arr);
	if (isValid(arr)) {
		printf("TRUE");
	}
	else {
		printf("FALSE");
	}
	return 0;
}