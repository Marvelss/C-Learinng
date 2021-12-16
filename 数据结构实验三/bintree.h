#include<iostream>
using namespace std;

//定义节点
typedef struct node
{
	struct node* left;
	struct node* right;
	char data;
}BiTreeNode, * BiTree;


//按照前序顺序建立二叉树
void createBiTree(BiTree& T)
{//输入需要将二叉树补成满二叉树  ABD##E##CH###  或者 AB##C##
	char c;
	cin >> c;
	if ('#' == c)             //当遇到#时，令树的根节点为NULL，从而结束该分支的递归
		T = NULL;
	else
	{
		T = new BiTreeNode;
		T->data = c;
		createBiTree(T->left);
		createBiTree(T->right);
	}
}

//前序遍历输出
void fstorder1(BiTree T)
{
	if (T)
	{
		cout << T->data << " ";
		fstorder1(T->left);
		fstorder1(T->right);
	}
}
