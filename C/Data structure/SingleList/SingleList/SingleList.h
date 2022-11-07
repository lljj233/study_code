#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;
typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SLTNode;
void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTDataType x);
//void SListPushFront(SLTNode* phead, SLTDataType x);