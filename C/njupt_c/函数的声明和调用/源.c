#define _CRT_SECURE_NO_WARNINGS

//变量名的开头必须是字母或下划线，不能是数字。实际编程中最常用的是以字母开头，而以下划线开头的变量名是系统专用的。
//在编程的时候，除非要求这么定义，否则永远都不要使用下划线作为一个变量名的开头。

//变量名中的字母是区分大小写的。比如 a 和 A 是不同的变量名，num 和 Num 也是不同的变量名。

//变量名绝对不可以是C语言关键字，这一点一定要记住！

//变量名中不能有空格。这个可以这样理解：因为上面我们说过，变量名是字母、数字、下划线的组合，没有空格这一项。


/*
#include<stdio.h>
void printfABC();
int main()
{
	printfABC();
	return 0;
}
void printfABC()
{
	printf("ABC\n");
	return 0;
}
*/



/*
#include<stdio.h>
void printABC(void);
int ab(int a, int b);//注意分号
int main()
{
	int sum = 0;
	sum = ab(5+2,3+4);
	printf("sum=%d\n", sum);
	return 0;
}
int ab(int a, int b)//没有分号
{
	int c = 0;
	c = a + b;
	printABC();
	printABC();
	printABC();
	return c;
}
void printABC(void)
{
	printf("ABC\n");
	return ;
}
*/



/*
#include<stdio.h>
void printN(int n);
int main()
{
	int m = 0;
	scanf("%d", &m);
	printN(m);
	return 0;
}
void printN(int n)
{
	int i = 0;

	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
*/




//函数的返回值类型：如果不需要返回计算的结果，则不需要返回值。如果有计算结果需要返回，则需要返回值类型。
//函数的参数：如果不需要传数据过来运算，则为空（void)。如果需要传数据过来运算，则需要形参。



/*
#include<stdio.h>
int sum(int n);
int main()
{
	int m = 0, s = 0;
	scanf("%d", &m);
	s=sum(m);
	if (s == -1)
	{
		printf("输入异常");
	}
	else
	{
		printf("sum=%d", s);
	}
	return 0;
}
int sum(int n)
{
	if (n < 1)
	return -1;
	int i = 0, sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
*/



/*
#include<stdio.h>
void _sum9！(int n);
int main()
{
	int m = 0 ;
	scanf("%d", &m);
	_sum9！(m);
	return 0;
}
void _sum9！(int n)
{
	int i = 0, sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("sum=%d", sum);
}
*/


/*
#include<stdio.h>
int fun(int n);
int main()
{
	int m = 0;
	printf("输入m:");
	scanf("%d", &m);
	printf("%d", fun(m));
	return 0;
}
int fun(int n)
{
	if (n < 1)
		return -1;
	else if (n == 1)
		return 1;
	else
		return n * fun(n - 1);
}
*/



