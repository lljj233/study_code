#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
////枚举常量
//enum Color
//{
//	RED, GREEN, BLUE
//};
//
//int main()
//{
//	enum Color a = RED;
//	printf("%d\n", a);
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	//RED = 5;
//	return 0;
//}



//const常量
//#include<stdio.h>
//int main()
//{
//	const int a = 10;
//	int b = 5;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	//a = 11;//a的值不能被修改
//	b = 6;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}



//#define定义的标识符常量
#define N 100
#include<stdio.h>
int main()
{
	int arr[N] = { 0 };
	printf("N = %d\n", N);
	return 0;
}