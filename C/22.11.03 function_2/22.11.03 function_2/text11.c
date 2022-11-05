#define _CRT_SECURE_NO_WARNINGS 1

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
//#include<stdio.h>
//int func(int n)
//{
//	if (n < 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * func(n - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = func(a);
//	printf("%d", ret);
//	return 0;
//}

//非递归
//#include<stdio.h>
//int func(int n)
//{
//	int i = 0;
//	int mul = 1;
//	for (i = 1; i <= n; i++)
//	{
//		mul *= i;
//	}
//	return mul;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = func(a);
//	printf("%d", ret);
//	return 0;
//}


//求第n个斐波那契数
//1 1 2 3 5 8 13...

//递归
//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//非递归
//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//#include<stdio.h>
//void reverse_string(char* string)
//{
//	if (*string != '\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c", *(string-1));
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	return 0;
//}


//利用递归计算n的k次方
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / Pow(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}