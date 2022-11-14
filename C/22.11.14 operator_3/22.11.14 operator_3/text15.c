#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//自增自减

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++：先使用后++
//	//相当于int b = a;a = a + 1;
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	int c = 10;
//	int d = ++c;//前置++：先++后使用
//	//相当于a = a + 1;b = a;
//	printf("%d\n", c);//11
//	printf("%d\n", d);//11
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//
//	int b = 10;
//	printf("%d\n", ++b);//11
//	printf("%d\n", b);//11
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//	int b = 10;
//	printf("%d\n", --b);//9
//	printf("%d\n", b);//9
//	return 0;
//}

// ++ -- 是有副作用的(改变自身)
//int main()
//{
//	int a = 10;
//	int b = ++a;//a=11 b=11
//
//	int a = 10;
//	int b = a + 1;//a=10 b=11
//	return 0;
//}


//强制类型转换
//int main()
//{
//	int a = (int)3.14;//保留整数
//	printf("%d", a);
//	return 0;
//}

//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int x = rand();
//	printf("%d", x);
//	return 0;
//}


//sizeof和数组
//void test1(int arr[])//数组传参，形参可以写成指针
//{
//	printf("%zd\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(ch));//10
//
//	//x64下运行是8，x86下运行是4
//	test1(arr);//4
//	test2(ch);//4
//	return 0;
//}



//逻辑操作符
//逻辑与 && (并且)  一个为假则为假，两个都为真才为真
//逻辑或 || (或者)  一个为真则为真，两个都为假才为假 
//注意区分 按位与& 与 按位或|
//int main()
//{
//	int x = 1;
//	int y = 0;
//	if (x && y)
//	{
//		printf("&&\n");
//	}
//	if (x || y)
//	{
//		printf("||\n");
//	}
//	return 0;
//}

//判断闰年
//int main()
//{
//	int y = 2331;
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		printf("%d是闰年\n", y);
//	}
//	else
//	{
//		printf("%d不是闰年\n", y);
//	}
//	return 0;
//}

//逻辑操作符的短路效应
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//  //i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//逗号表达式
//从左到右依次执行,整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//}

//if (a = b + 1, c = 1 / 2, d > 0)