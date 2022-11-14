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


//访问一个结构体的成员
//内置类型->自定义类型->结构体，枚举，联合体
//typedef struct students
//{
//	char name[20];
//	int num;
//	int age;
//}STU;
//void print(STU* p)
//{
//	printf("%s %d %d\n", (*p).name, (*p).num, (*p).age);
//	printf("%s %d %d\n", p->name, p->num, p->age);
//}
//int main()
//{
//	STU p1 = { "张三",11,18 };
//	printf("%s %d %d\n", p1.name, p1.num, p1.age);
//	print(&p1);
//	return 0;
//}


//c的整型算术运算总是在至少以缺省整型类型的精度来实现的
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型
//这种转换称为整型提升,整型提升是按照变量的数据类型的符号位来提升的
//int main()
//{
//	char a = 3;
//	// 截断：4个字节的数据放在1个字节里
//	// 00000000 00000000 00000000 00000011 - 3的二进制序列
//	// 00000011 - a
//
//	char b = 127;
//	// 00000000 00000000 00000000 01111111
//	// 01111111 - b
//
//	char c = a + b;
//	// 00000011 + 01111111
//	// 整型提升
//	// 00000000 00000000 00000000 00000011 +
//	// 00000000 00000000 00000000 01111111
//	// 00000000 00000000 00000000 10000010
//	// 10000010 - c
//
//	printf("%d", c);
//	// %d是打印十进制数
//	// 11111111 11111111 11111111 10000010 - 补码
//	// 11111111 11111111 11111111 10000001
//	// 10000000 00000000 00000000 01111110 - 对应的原码
//	// -126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));   //1
//	printf("%u\n", sizeof(+c));  //4
//	printf("%u\n", sizeof(-c));  //4
//	return 0;
//}



//算术转换(由下至上)
//如果某个操作数的类型在上面这个列表中排名较低
//那么首先要转换为另外一个操作数的类型后执行运算
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int