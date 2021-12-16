#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"


int main()
{
	BiTree T;
	createBiTree(T);
	cout << "Ç°Ðò±éÀú£º" << endl;
	fstorder1(T);
	return 0;
}
