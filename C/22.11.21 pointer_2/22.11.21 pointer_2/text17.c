#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;       //pa是一级指针变量
//	int** ppa = &pa;    //ppa是二级指针变量  以此类推
//
//	printf("%d\n", **ppa);
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//指针数组 - 存放指针的数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//	int* arr[5] = { &a, &b, &c, &d, &e };//arr是指针数组
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	//使用多个一维数组模拟一个二维数组
//	int a[] = { 1,2,3,4 };
//	int b[] = { 1,3,5,7 };
//	int c[] = { 2,4,6,8 };
//	int* arr[3] = { a,b,c };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}