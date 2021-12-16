#include<iostream>
using namespace std;

//����ڵ�
typedef struct node
{
	struct node* left;
	struct node* right;
	char data;
}BiTreeNode, * BiTree;


//����ǰ��˳����������
void createBiTree(BiTree& T)
{//������Ҫ��������������������  ABD##E##CH###  ���� AB##C##
	char c;
	cin >> c;
	if ('#' == c)             //������#ʱ�������ĸ��ڵ�ΪNULL���Ӷ������÷�֧�ĵݹ�
		T = NULL;
	else
	{
		T = new BiTreeNode;
		T->data = c;
		createBiTree(T->left);
		createBiTree(T->right);
	}
}

//ǰ��������
void fstorder1(BiTree T)
{
	if (T)
	{
		cout << T->data << " ";
		fstorder1(T->left);
		fstorder1(T->right);
	}
}
