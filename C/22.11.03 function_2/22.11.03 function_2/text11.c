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