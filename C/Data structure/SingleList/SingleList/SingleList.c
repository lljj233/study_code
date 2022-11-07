#define _CRT_SECURE_NO_WARNINGS 1
#include"SingleList.h"

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
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
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
