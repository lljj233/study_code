#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找到尾节点的指针
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//尾节点，链接新节点
		tail->next = newnode;
	}
}
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SListPopBack(SLTNode** pphead)
{
	//链表本身为空的情况
	/*if (*pphead == NULL)
		return;*/
	assert(*pphead);
	//只有一个节点的情况
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//找到尾节点的指针
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
	
}
void SListPopFront(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* first = *pphead;
	*pphead = first->next;
	free(first);
	first = NULL;
}

