#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include"Sort.h"

void TestInsertSort()
{
	int a[] = { 3,6,9,1,0,4,8 };
	PrintSort(a, sizeof(a) / sizeof(int));
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}

int main()
{
	TestInsertSort();
	return 0;
}