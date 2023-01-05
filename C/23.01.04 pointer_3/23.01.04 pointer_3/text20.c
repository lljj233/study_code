#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	const char* p = "abcdef";
//	printf("%s\n", p);
//	
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//
//	const char* str3 = "hello";
//	const char* str4 = "hello";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3==str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3and str4 are not same\n");
//
//	return 0;
//}



//指针数组 - 存放指针的数组
//int main()
//{
//	//存放字符指针的数组
//	const char* arr[4] = { "abcd","dsa","isis","sdisd" };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int arr3[5] = { 1,3,5,7,9 };
//	int arr4[5] = { 0,0,0,0,0 };
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(arr[i]+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}



//数组指针 - 存放数组地址的指针 - 指向数组的指针
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* pc = &ch;
//
//	//整型指针
//	int num = 10;
//	int* pn = &num;
//
//	int arr[10];
//	int(*pa)[10] = &arr;
//	//pa就是一个数组指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  //&arr取出的是数组的地址，只有数组的地址才需要数组来接收
//	int(*p)[10] = &arr;
//
//	//数组名 - 数组首元素的地址
//	//&数组名 - 数组的地址
//	//数组首元素的地址和数组的地址从值的角度来看是一样的，但是意义不一样
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//+4
//
//	printf("%p\n", &arr[0]);6
//	printf("%p\n", &arr[0] + 1);//+4
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//+40
//	return 0;
//}



//不同方法打印二维数组
//void print1(int arr[3][4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{			
//			//printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
// 
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {2,3,4,5} , {3,4,5,6} };
//	//print1(arr, 3, 4);
//	print2(arr, 3, 4);
//	return 0;
//}



//一维数组传参
//#include <stdio.h>
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
////上述传参都是可行的
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}



//二维数组传参
//void test(int arr[3][5])
//{}
///*void test(int arr[][])//错误，列不能省略
//{}*/
//void test(int arr[][5])
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
///*void test(int* arr)//错误
//{}*/
///*void test(int* arr[5])//错误
//{}*/
//void test(int(*arr)[5])
//{}
///*void test(int** arr)//错误
//{}*/
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}



//一级指针传参
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}