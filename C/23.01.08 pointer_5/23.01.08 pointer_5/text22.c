#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//一维数组习题

//1.sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，数组名表示整个数组，取出来的是整个数组的地址
//3.除此之外，所有的数组名都是数组首元素的地址
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//a+0是数组第一个元素的地址，为4或8
//	printf("%d\n", sizeof(*a));//*a是数组首元素，计算的是数组首元素的大小，单位是字节
//	printf("%d\n", sizeof(a + 1));//a+1是数组第二个元素的地址，为4或8
//	printf("%d\n", sizeof(a[1]));//a[1]是数组第二个元素，计算的是第二个元素的字节大小
//	printf("%d\n", sizeof(&a));//&a是整个数组的地址，为4或8
//	printf("%d\n", sizeof(*&a));//&a是整个数组，*&a是取出整个数组，为16
//	printf("%d\n", sizeof(&a + 1));//&a是整个数组，&a + 1是跳过整个数组，指向数组后的空间地址，为4或8
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址，为4或8
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0] + 1是数组第二个元素的地址，为4或8
//	return 0;
//}