#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

////��ǿ�����ά����
//#define MAX_SIZE 10
//typedef int SQDateType;
////��̬˳�������⣺�����˲����ã��������ò��꣬����������
//
//typedef struct SeqList
//{
//	SQDateType a[MAX_SIZE];
//	int size;
//}SL;
////typedef struct SeqList SL;
////��ɾ���ҵȹ��ܽӿں���������
//void SeqListInit(SL* ps1);
//void SeqListPushBack(SL* ps1, SQDateType x);
//void SeqListFrontBack(SL* ps1, SQDateType x);
//void SeqListPopBack(SL* ps1);
//void SeqListPopFront(SL* ps1);


typedef int SQDateType;
//��̬
typedef struct SeqList
{
	SQDateType* a;
	int size;    //��Ч���ݵĸ���
	int capacity;//����
}SL;
//typedef struct SeqList SL;
//��ɾ���ҵȹ��ܽӿں���������
void SeqListInit(SL* ps1);
void SeqListPrint(SL* ps1);

void SeqListPushBack(SL* ps1, SQDateType x);
void SeqListFrontBack(SL* ps1, SQDateType x);
void SeqListPopBack(SL* ps1);
void SeqListPopFront(SL* ps1);
void SeqListInsert(SL* ps1, int pos, SQDateType x);
void SeqListErase(SL* ps1, int pos);