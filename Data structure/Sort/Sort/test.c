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

void TestShellSort()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,-7,-8,-9 };
	PrintSort(a, sizeof(a) / sizeof(int));
	ShellSort(a, sizeof(a) / sizeof(int));
}

int main()
{
	//TestInsertSort();
	TestShellSort();
	return 0;
}