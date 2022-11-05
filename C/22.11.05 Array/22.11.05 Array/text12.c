#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int arr1[5 + 6] = {0};
//	int arr2[5] = {0};
//
//	//int n = 10;
//	//int arr3[n];//VS的编译器IDE不支持C99中的变长数组，C99标准支持了变长数组的概念，但是不能初始化
//
//
//	return 0;
//}


//#include<stdio.h>
//int arr[10];//全局数组默认初始化为0
//int main()
//{
//	//初始化指创建的同时给数组一些值
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr2[10] = { 1,2,3 };//不完全初始化，剩余的元素默认初始化为0
//	//int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };//这里没有指定数组元素个数，编译会根据初始化的内容来确定数组的元素个数
//
//	//arr4与arr5不一样
//	//int arr4[] = { 1,2,3 };//3个元素
//	//int arr5[10] = { 1,2,3 };//10个元素
//
//	//char arr6[3] = { 'a', 'b', 'c' };
//	//char arr7[] = { 'a', 'b', 'c' };//3个元素
//
//	//char arr8[10] = "abc";//10个元素
//	//char arr9[] = "abc";//4个元素
//
//	char arr8[] = "abc";
//	char arr9[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr8);
//	printf("%s\n", arr9);
//
//	return 0;
//}


//一维数组
//1. 数组是有下标的，下标是从0开始的
//2. [] 下标访问操作符

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//按照顺序打印数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//倒序打印
//	for (i = sz-1; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	//跳着打印
//	for (i = 0; i<sz; i+=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//一维数组的存储
//1.一维数组在内存中是连续存放的
//2.随着数组下标的增长，数组的地址由低到高变化

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}



//二维数组的创建和初始化

//#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int arr2[3][4] = { 1,2,3,4,5};
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//	//二维数组的行是可以省略的，但是列不能省略
//	int arr4[][2] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//二维数组的存储
//二维数组在内存中是连续存放的
// 二维数组也是一维数组的数组

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)            //for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)        //for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	printf("\n");
//	
//	
//	int*p = &arr[0][0];
//	int k = 0;
//	for (k = 0; k < 12; k++)
//	{
//		printf("%d ", *(p + k));
//	}
//
//	return 0;
//}


