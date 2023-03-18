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
//pos֮ǰ����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//posλ��ɾ��
void SListErase(SLTNode** pphead, SLTNode* pos);

//pos֮�����
void SListInsertAfter(SLTNode* pos, SLTDataType x);
//posλ�ú���ɾ��
void SListEraseAfter(SLTNode* pos);