#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTDataType x);
void SListPushFront(SLTNode** pphead, SLTDataType x);

void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//pos之前插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//pos位置删除
void SListErase(SLTNode** pphead, SLTNode* pos);

//pos之后插入
void SListInsertAfter(SLTNode* pos, SLTDataType x);
//pos位置后面删除
void SListEraseAfter(SLTNode* pos);