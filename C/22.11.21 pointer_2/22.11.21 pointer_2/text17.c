#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二级指针
int main()
{
	int a = 10;
	int* pa = &a;       //pa是一级指针变量
	int** ppa = &pa;    //ppa是二级指针变量  以此类推

	printf("%d\n", **ppa);
	**ppa = 20;
	printf("%d\n", a);
	return 0;
}