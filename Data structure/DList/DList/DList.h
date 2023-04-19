#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdlib.h>
#include<assert.h>
#include<stdio.h>
#include<stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct  ListNode* next;
	struct  ListNode* prev;

	LTDataType data;
}LTNode;

LTNode* LTInit();
void LTDestroy(LTNode* phead);
void LTPrint(LTNode* phead);
bool LTEmpty(LTNode* phead);

void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

void LTInsert(LTNode* pos, LTDataType x);//��pos֮ǰ����
void LTErase(LTNode* pos);// ɾ��pos���ڽڵ�

LTNode* LTFind(LTNode* phead, LTDataType x);

