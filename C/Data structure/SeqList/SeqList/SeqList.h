#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

////增强程序可维护性
//#define MAX_SIZE 10
//typedef int SQDateType;
////静态顺序表的问题：给少了不够用，给多了用不完，不能灵活控制
//
//typedef struct SeqList
//{
//	SQDateType a[MAX_SIZE];
//	int size;
//}SL;
////typedef struct SeqList SL;
////增删查找等功能接口函数的声明
//void SeqListInit(SL* ps1);
//void SeqListPushBack(SL* ps1, SQDateType x);
//void SeqListFrontBack(SL* ps1, SQDateType x);
//void SeqListPopBack(SL* ps1);
//void SeqListPopFront(SL* ps1);


typedef int SQDateType;
//动态
typedef struct SeqList
{
	SQDateType* a;
	int size;    //有效数据的个数
	int capacity;//容量
}SL;
//typedef struct SeqList SL;
//增删查找等功能接口函数的声明
void SeqListInit(SL* ps1);
void SeqListPrint(SL* ps1);

void SeqListPushBack(SL* ps1, SQDateType x);
void SeqListFrontBack(SL* ps1, SQDateType x);
void SeqListPopBack(SL* ps1);
void SeqListPopFront(SL* ps1);
void SeqListInsert(SL* ps1, int pos, SQDateType x);
void SeqListErase(SL* ps1, int pos);