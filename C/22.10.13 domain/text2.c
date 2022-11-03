#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int a = 3;
//int main()
//{
//	int a = 3;
//	printf("a = %d\n", a);//全局变量和局部变量冲突时，优先考虑局部变量，a=3
//	{
//		int b = 2;
//		printf("b = %d\n", b);
//	}
//	//printf("b = %d", b);
//}



//#include <stdio.h>
//
//int a = 3;//从上往下编辑，先声明，定义在后面会报错
//
//void text()
//{
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	printf("a=%d\n", a);
//	//text();
//}



#include<stdio.h>

extern int _2b;//extern是用来声明外部的符号

int main()
{
	printf("%d\n", _2b);
}
