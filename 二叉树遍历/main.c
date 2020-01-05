#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>
#include <string.h>
#include <Windows.h>
#include <string.h>

typedef struct BTreeNode
{
	struct BTreeNode* left;
	struct BTreeNode* right;
	int val;
}BTreeNode;

BTreeNode* CreateTree(char *a, int index)
{
	if (a[index] == '#') return NULL;

	BTreeNode* root = (BTreeNode*)malloc(sizeof(BTreeNode));
	root->val = a[index];
	index++;
	root->left = CreateTree(a, index);
	root->right = CreateTree(a, index);
}

int main()
{
	//char a[100] = { 2,3,5,6,8,9,6,4,3,2,4,6,1 };
	////scanf("%s", a);
	//int index = 0;
	////BTreeNode * root = 
	//CreateTree(a, index);
	int ret = __max(2, 5);
	printf("%d", ret);
	return 0;
}