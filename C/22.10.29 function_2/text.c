#define _CRT_SECURE_NO_WARNINGS 1

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


//函数返回值不写时默认返回int类型,要写清楚是否有返回值和是否需要传参
//#include<stdio.h>
//test()
//{
//	printf("avc\n");
//}
//int main()
//{
//	int a = test();
//	printf("%d", a);
//	return 0;
//}


//链式访问  把一个函数的返回值作为另一个函数的参数
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 58)));//printf函数返回值是打印在屏幕上的字符个数
//	return 0;
//}


//函数的声明和定义
//定义也是一种特殊的声明
//#include<stdio.h>
//int add(int x, int y);//函数的声明
//
//int mul(int x, int y)//函数的定义
//{
//	return x * y;
//}
//
//int main()
//{
//	int a = add(4, 5);
//	int b = mul(4, 5);
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}


//一般情况下，声明放在头文件里(add.h),函数实现在另一个源文件(add.c)
//#include"add.h" //用双引号引头文件
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = add(a, b);
//	printf("%d", ret);
//	return 0;
//}


//递归！！！

//顺序打印num
//#include<stdio.h>
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}


//编写函数求字符串长度
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//指针字符+1，向后跳一个字符
		      //整型指针+1，向后跳一个整型，也就是四个字节
	}
	return count;
}
int main()
{
	char arr[] = "Hello";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}