#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 17 / 4;
//	float b = 17 / 4;//输出b为整数
//	float c = 17 / 4.0;//也可以是17.0/4或17.0/4.0
//	//int d = 17.0 % 4.0;错误，取余（取模）的左右两边必须是整数
//	int d = 17 % 4;
//
//	printf("a=%d\n", a);
//	printf("b=%f\n", b);
//	printf("c=%f\n", c);
//	printf("d=%d\n", d);
// 
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	float b = 1.1f;
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(float));
//
//	return 0;
//}



//int main()
//{
//	int flag1 = 3;
//	int flag2 = 0;
//	if (flag1)
//	{
//		printf("right\n");
//	}
//
//	if (!flag2)
//	{
//		printf("wrong\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 10;
//
//	a = c++;//后置++，先使用，后++。相当于int a = c;c = c + 1;
//	b = ++c;//前置++，先前置，后++。相当于c = c + 1;int a = c;
//
//	printf("a=%d\n", a);//10
//	printf("c=%d\n", c);//12
//
//	return 0;
//}



//int main()
//{
//	//int a = 3.14;错误，类型不相同
//	int a = (int)3.14;//只取整数部分
//	printf("a=%d", a);//正确，强制类型转换
//	return 0;
//}



//逻辑操作符
//&& 逻辑与（）并且  两边同时为真才为真
//|| 逻辑或（）或者  两边同时为假才为假
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int c = 0;
//	int d = 0;
//
//	if (a && b)
//	{
//		printf("ok\n");
//	}
//	if (a && c)
//	{
//		printf("okk\n");
//	}
//	if (a || b)
//	{
//		printf("okkk\n");
//	}
//	if (a || c)
//	{
//		printf("okkkk");
//	}
//	if (c && d)
//	{
//		printf("okkkkk");
//	}
//
//	return 0;
//}



//条件操作符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	m = (a > b ? a : b);
//	//相当于
//	/*if (a > b)
//		m = a;
//	if (a < b)
//		m = b;*/
//	printf("m=%d\n", m);
//	return 0;
//}


//void copy()
//{
//	printf("ABCD\n");
//}
//
//int main()
//{
//	copy();//()为函数调用操作符
//	return 0;
//}



//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d\n", arr[2]);//[]为下标引用操作符
//	return 0;
//}