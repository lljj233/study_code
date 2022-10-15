#define _CRT_SECURE_NO_WARNINGS

/*
include <stdio.h>
#include <stdlib.h>

struct Node
{
	int date;//数据域
	struct Node* next;//指针域
};

int main()
{
	struct Node Node1 = { 1,NULL };
	struct Node Node2 = { 2,NULL }; 
	struct Node Node3 = { 3,NULL };
	Node1.next = &Node2;
	Node2.next = &Node3;
	system("pause");
	return 0;
}*/





//链表是结构体变量与结构体变量连接在一起
//动态创建一个链表：(动态内存申请+模块化设计)
//1.创建链表(创建一个表头来表示整个链表)
//2.创建结点(内存)
//3.插入节点
//4.删除节点
//5.打印遍历链表(测试)



/*
#include <stdio.h>
#include <stdlib.h>//动态内存分配
struct Node
{
	int date;
	struct Node* next;
}
struct Node* createList()
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//headNode成为了结构体变量
	//变量使用前必须初始化
	//headNode->date = 1;
	headNode->next = NULL;
	return headNode;
}
//创建节点
struct Node* createNode(int date)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}
int main()
{
	struct Node* list = creatList();
	system("pause");
	return 0;
}*/



/*
#include <stdio.h>
#include <stdlib.h>//动态内存分配
int main()
{
	int* p;
	//void* malloc(size);
	//malloc函数的功能是在堆区开辟size个字节的内存
	//malloc(sizeof(int));//开辟4个字节
	p = (int*)malloc(4);//让p指向该内存
	//用malloc去开辟的内存，不会自己释放，需要主动释放，即free(p);
	return 0;
}
*/



#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
	int score;
	struct student* next;
} LinkList;
LinkList* creat(int n) 
{
	LinkList* head, * node, * end;//定义头节点，普通节点，尾部节点；
	head = (LinkList*)malloc(sizeof(LinkList));//分配地址
	end = head;//若是空链表则头尾节点一样
	for (int i = 0; i < n; i++) 
	{
		node = (LinkList*)malloc(sizeof(LinkList));
		scanf("%d", &node->score);
		end->next = node;
		end = node;
	}
	end->next = NULL;//结束创建
	return head;
}
void change(LinkList* list, int n) 
{
	//n为第n个节点
	LinkList* t = list;
	int i = 0;
	while (i < n && t != NULL) 
	{
		t = t->next;
		i++;
	}
	if (t != NULL)
	{
		puts("输入要修改的值");
		scanf("%d", &t->score);
	}
	else
	{
		puts("节点不存在");
	}
}
void delet(LinkList* list, int n)
{
	LinkList* t = list, * in;
	int i = 0;
	while (i < n && t != NULL)
	{
		in = t;
		t = t->next;
		i++;
	}
	if (t != NULL)
	{
		in->next = t->next;
		free(t);
	}
	else 
	{
		puts("节点不存在");
	}
}
void insert(LinkList* list, int n)
{
	LinkList* t = list, * in;
	int i = 0;
	while (i < n && t != NULL)
	{
		t = t->next;
		i++;
	}
	if (t != NULL) 
	{
		in = (LinkList*)malloc(sizeof(LinkList));
		puts("输入要插入的值");
		scanf("%d", &in->score);
		in->next = t->next;//填充in节点的指针域，也就是说把in的指针域指向t的下一个节点
		t->next = in;//填充t节点的指针域，把t的指针域重新指向in
	}
	else 
	{
		puts("节点不存在");
	}
}
while (h->next != NULL)
{
	h = h->next;
	printf("%d  ", h->score);
}