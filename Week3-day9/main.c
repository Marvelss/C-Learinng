#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main()
{
	char c[100];
	char d[100];
	gets(c);
	for (int i = 0; i < strlen(c); i++) {
		d[i] = c[strlen(c)-1 - i];
	}
	d[strlen(c)] = '\0';

	/*puts(d);*/

	int result = strcmp(c, d);

	if (result < 0)

	{

		printf("%d\n", -1);

	}

	else if (result > 0)

	{

		printf("%d\n", 1);

	}

	else {

		printf("%d\n", 0);

	}

	return 0;
}