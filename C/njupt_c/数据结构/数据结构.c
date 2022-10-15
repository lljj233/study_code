//#pragma once
/*
void Reverse(Sqlist& L)
{
	int temp;
	for (i = 0; i < L.Length / 2; i++) {
		temp = L.data[i];
		L.data[i] = L.data[L.length - 1 - i];
		L.data[L.Length - 1 - i] = temp;
	}
}
*/


/*
void Delete_x1(LinkList& L, int x)
{	
	LinkList p;							
	if (L == NULL)
		return;
	if (L->data == x)
	{
		p = L;				
		L = L->next;			
		free(p);			
		Delete_x1(L, x);
	}
	else
		Delete_x1(L->next, x);
}
*/


/*
Linklist MergerLinklist(Linklist L0, Linklist L1)
{
	LNode* Newhead;
	if (L0 == NULL)
	{
		return L1;
	}
	else if (L1 == NULL)
	{
		return L0;
	}
	else
	{
        if (L0->data < L1->data)
		{
			Newhead = L0;
			Newhead->next = MergerLinklist(L0->next, L1);

		}
		else
		{
			Newhead = L1;
			Newhead->next = MergerLinklist(L1->next, L0);
		}
	}
	return Newhead;
}
*/


/*
void Inverse(Stack* S, Queue* Q)
{
	ElemType x;
	while (!IsEmpty(S)) 
	{  
		Top(S, &x);
		EnQueue(Q, x);
		Pop(S);
	}
	while (!IsEmpty(Q))
	{  
		Front(Q, &x);
		Push(S, x);
		DeQueue(Q);
	}
}
*/


/*
private static int recurMax(int a[], int n)
{
	if (1 == n) 
	{
		return a[0];
	}
	else
	{
		int temp = recurMax(arr, n - 1);
		return temp > a[n - 1] ? temp : a[n - 1];
	}
}
*/


/*
private static double recurAvg(int a[], int n)
{
	if (1 == n) 
	{
		return a[0];
	}
	else
	{
		double temp = recurAvg(arr, n - 1);
		return (temp * (n - 1) + a[n - 1]) / n;
	}
}
*/



/*
int Search_Binary(SStable ST, keyType key, int low, int high)
{
	if (low > high)
		return 0;			
	    mid = (low + high) / 2;
	if (key == ST.elem[mid].key)
		return mid;
	else if (key < ST.elem[mid].key)
		high = mid - 1;	
	else	
		low = mid + 1;
}
*/




/*
#define MAX_INIT_SIZE  100
#define LISTINCREMENT  10

typedef struct
{
	int* elem;
	int length;
	int listsize;
}SqList;

void InitList(SqList* L)
{
	L->elem = (int*)malloc(MAX_INIT_SIZE * sizeof(int));
	if (!L)
	{
		printf("error");
	}
	else
	{
		L->length = 0;
		L->listsize = MAX_INIT_SIZE;
	}
}

void ListInsert(SqList* L, int i, int e)
{
	int* p;
	int* q;
	int* newbase;
	if (i<1 || i>L->length + 1) //i == length + 1 好好体会
	{
		printf("error");
	}
	else
	{
		if (L->length >= L->listsize)
		{
			newbase = (int*)realloc(L->elem, (L->listsize + LISTINCREMENT) * sizeof(int));
			if (!newbase)
			{
				printf("newbase error");
			}
			else
			{
				L->elem = newbase;
				L->listsize += LISTINCREMENT;
			}
		}

		q = &(L->elem[i - 1]);

		for (p = &(L->elem[L->length - 1]); p >= q; p--)
		{
			*(p + 1) = *p;
		}

		*(p + 1) = e;
		L->length++;


	}
}

void ListDelete(SqList* L, int i, int* e)
{
	int* p;
	int* q;
	if (i<1 || i>L->length)
	{
		printf("index error");
	}
	else
	{
		q = &(L->elem[L->length - 1]); //最后一个数的地址
		p = &(L->elem[i - 1]);
		*e = *p;

		for (p++; p <= q; p++)
		{
			*(p - 1) = *(p);
		}

		L->length--;
	}
}

void printList(SqList L)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		printf("\n顺序表第%d个数 ： %d\n", i + 1, L.elem[i]);
	}
}


void main()
{
	SqList L;
	int e;
	InitList(&L);
	ListInsert(&L, 1, 10);
	ListInsert(&L, 2, 20);
	printList(L);
	ListDelete(&L, 2, &e);
	printList(L);
	printf("e = %d", e);

}
*/



/*
#include<stdio.h>
#include<stdlib.h>

typedef struct Tree {

	int data;					//	存放数据域
	struct Tree* lchild;			//	遍历左子树指针
	struct Tree* rchild;			//	遍历右子树指针

}Tree, * BitTree;

BitTree CreateLink()
{
	int data;
	int temp;
	BitTree T;

	scanf_s("%d", &data);		//	输入数据
	temp = getchar();			//	吸收空格

	if (data == -0)
	{			
                                        //	输入0 代表此节点下子树不存数据，也就是不继续递归创建
		return NULL;

	}
	else 
	{
		T = (BitTree)malloc(sizeof(Tree));			//		分配内存空间
		T->data = data;								//		把当前输入的数据存入当前节点指针的数据域中

		printf("请输入%d的左子树: ", data);
		T->lchild = CreateLink();					//		开始递归创建左子树
		printf("请输入%d的右子树: ", data);
		T->rchild = CreateLink();					//		开始到上一级节点的右边递归创建左右子树
		return T;							//		返回根节点
	}

}
//	先序遍历
void ShowXianXu(BitTree T)			//		先序遍历二叉树
{
	if (T == NULL)						//	递归中遇到NULL，返回上一层节点
	{
		return;
	}
	printf("%d ", T->data);
	ShowXianXu(T->lchild);			//	递归遍历左子树
	ShowXianXu(T->rchild);			//	递归遍历右子树
}
//	中序遍历
void ShowZhongXu(BitTree T)			//		先序遍历二叉树
{
	if (T == NULL)						//	递归中遇到NULL，返回上一层节点
	{
		return;
	}

	ShowZhongXu(T->lchild);			//	递归遍历左子树
	printf("%d ", T->data);
	ShowZhongXu(T->rchild);			//	递归遍历右子树

}
//	后序遍历
void ShowHouXu(BitTree T)			//		后序遍历二叉树
{
	if (T == NULL)						//	递归中遇到NULL，返回上一层节点
	{
		return;
	}

	ShowHouXu(T->lchild);			//	递归遍历左子树
	ShowHouXu(T->rchild);			//	递归遍历右子树
	printf("%d ", T->data);
}


int main()
{
	BitTree S;
	printf("请输入第一个节点的数据:\n");
	S = CreateLink();			//		接受创建二叉树完成的根节点
	printf("先序遍历结果: \n");
	ShowXianXu(S);				//		先序遍历二叉树

	printf("\n中序遍历结果: \n");
	ShowZhongXu(S);				//		中序遍历二叉树

	printf("\n后序遍历结果: \n");
	ShowHouXu(S);				//		后序遍历二叉树

	return 0;
}
*/



