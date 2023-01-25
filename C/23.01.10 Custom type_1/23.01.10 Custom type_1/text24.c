#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//结构体

//匿名结构体 - 直接在结构体后创建变量
//struct
//{
//	char name[20];
//	int age;
//}x;

//struct
//{
//	int a;
//	char b;
//	double c;
//}x;
//struct
//{
//	int a;
//	char b;
//	double c;
//}* p;
//int main()
//{
//	p = &x;
//	//编译器会把上面的两个声明当成完全不同的两个类型。
//	//所以是非法的。
//	return 0;
//}



//结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};



//结构体的初始化
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 10,20 };
//struct Point p2 = { 20,30 };
//
//struct s
//{
//	int num;
//	char ch;
//	struct Point p;
//	float d;
//};
//
//int main()
//{
//	struct Point p3 = { 40.49 };
//
//	struct s s1 = { 38,'d',{38,58},3.14f };
//	struct s s2 = { .p = {4,5}, .ch = 'o', .num = 49, .d = 3.39f };//乱序初始化
//
//	printf("%d %c %d %f\n", s1.num, s1.ch, s1.p.x, s1.d);
//	printf("%d %c %d %f\n", s2.num, s2.ch, s2.p.x, s2.d);
//
//	return 0;
//}

