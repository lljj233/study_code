#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

typedef int HPDataType;
typedef struct Head
{
	HPDataType* array;
	int size;
	int capacity;
}HP;

void HeadInit(HP* php);
void HeadDestory(HP* php);
void HeadPush(HP* php, HPDataType x);
void HeadPop(HP* php);
HPDataType HeadTop(HP* php);
bool HeadEmpty(HP* php);
int HeadSize(HP* php);
void AdjustUp(HPDataType* array, int child);
void AdjustDown(HPDataType* array, int n, int parent);
void Swap(HPDataType* p1, HPDataType* p2);
