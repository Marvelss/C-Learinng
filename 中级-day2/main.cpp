#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct student{
	int id;
}stu;


//����ַ
void start(char*& p){

	p = (char*)malloc(20);
	fgets(p, 19, stdin);
}
//��ֵ
void change(int &p) {
	p = 1;
}
int main()
{
	char* p=NULL;
	start(p);
	puts(p);

	char* h = NULL;
	start(h);
	puts(h);
	/*int i = 100;
	printf("%d\n", i);
	change(i);
	printf("%d", i);*/

	//stu a{5};
	//printf("%d", a.id);
	return 0;
}