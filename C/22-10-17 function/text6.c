#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
 
//int add(int a, int b)
//{
//	int c = 0;
//	c = a + b;
//	return c;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum1 = 0;
//	printf("inut two nums\n");
//	scanf("%d %d", &num1, &num2);
//	sum1 = add(num1, num2);
//	printf("sum=%d\n", sum1);
//	return 0;
//}


//库函数

//strcpy函数  拷贝字符串函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello World";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	char* ret = strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}


//memset  修改前n项字符串
//int main()
//{
//	char arr[] = "Hello World";
//	printf("%s\n", arr);
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//自定义函数


//#include<stdio.h>
//void swap(int* x, int* y)
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    swap(&a,&b);
//    printf("%d,%d", a, b);
//    //函数调用的时候实参传递给形参，这时形参是实参的一份临时拷贝，对形参的修改不影响实参
//    return 0;
//}
