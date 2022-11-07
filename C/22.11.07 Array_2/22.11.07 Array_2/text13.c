#define _CRT_SECURE_NO_WARNINGS 1

//数组作为函数参数
#include<stdio.h>
//排序方法：冒泡排序，选择排序，插入排序，快速排序
//冒泡排序：两两相邻的数进行比较，有时要进行交换操作

//void Sort(int arr[],int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);  sizeof(arr)是一个地址，在x86下为4个字节
//	//错误，arr传过来的是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序，决定了一趟排序进行的比较次数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,4,6,7,1,0,5,9,8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//写一个函数对数组进行排序
//	Sort(arr,sz);
//	int i  = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//数组名一般是数组首元素的地址,两次情况例外
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的字节大小
//2.&数组名，这里的数组名表示整个数组,&数组名取出的是数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


