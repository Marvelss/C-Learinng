#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	int id;
	char name[10];
	char gender;
};

int main()
{
	struct student * p;
	struct student s;
	int id;
	char name[10];
	char gender;
	scanf("%d%s %c",&s.id,&s.name,&s.gender);
	p = &s;
	printf("%d %s %c", p->id, p->name, p->gender);
}