#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include"queue.h"

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return;
	}
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}

BTNode* CreateBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node2->right = node6;

	return node1;
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}

void PreOrder(BTNode* root)//前序遍历
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);

}

void InOrder(BTNode* root)//中序遍历
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)//后序遍历
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

//int size = 0;
//void TreeSize(BTNode* root)//每次调用前都需要对全局变量进行初始化，否则全局变量累加容易出错
//{
//	if (root == NULL)
//		return;
//	size++;
//	TreeSize(root->left);
//	TreeSize(root->right);
//}

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}

int TreeKLevel(BTNode* root, int k)
{
	//原理：当前树的第K层个数 = 左子树的第k-1层个数 + 右子树的第k-1层个数
	assert(k > 0);
	if (root==NULL)
		return 0;
	if (k == 1)
		return 1;
	int leftk = TreeKLevel(root->left, k - 1);
	int rightk = TreeKLevel(root->right, k - 1);
	return leftk + rightk;
}

//二叉树查找值为x的节点
//有多个值则返回第一个
BTNode* BinaryFind(BTNode* root, BTDataType x)
{
	if (root==NULL)
		return NULL;
	if (root->data == x)
		return root;

	BTNode* leftnode = BinaryFind(root->left, x);
	if (leftnode != NULL)
		return leftnode;
	BTNode* rightnode = BinaryFind(root->right, x);
	if (rightnode != NULL)
		return rightnode;
	
	return NULL;
}

//二叉树的层序遍历(利用队列--出上一层，带下一层)
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->data);

		if (front->left)
			QueuePush(&q, front->left);
		if (front->right)
			QueuePush(&q, front->right);
	}
	printf("\n");
	QueueDestroy(&q);
}

//判断二叉树是否是完全二叉树
bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front == NULL)
			break;
		else
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
	}

	//判断节点是否全为非空，是则为完全二叉树
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}

	QueueDestroy(&q);
	return true;
}

int main()
{
	BTNode* root = CreateBinaryTree();
	PreOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");
	PostOrder(root);
	printf("\n");

	/*TreeSize(root);
	printf("TreeSize = %d\n", size);
	size = 0;*/
	printf("TreeSize = %d\n", TreeSize(root));
	printf("TreeHeight = %d\n", TreeHeight(root));
	printf("TreeKLevel = %d\n", TreeKLevel(root,3));

	printf("BinaryFind = %p\n", BinaryFind(root, 3));
	printf("BinaryFind = %p\n", BinaryFind(root, 30));

	BinaryTreeLevelOrder(root);

	printf("BinaryTreeComplete = %d\n", BinaryTreeComplete(root));

	BinaryTreeDestory(root);
	root = NULL;

	return 0;
}