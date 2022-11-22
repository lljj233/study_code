#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//结构是一些值的集合，这些值称为成员变量。每个成员变量的类型可以不同

//结构体的声明,定义和初始化
//struct student//student是标签名，可以根据需求改变
//{
//	//结构体成员
//	char name[20];//姓名
//	int age;      //年龄
//	char sex[10]; //性别
//	float score;  //分数
//}s4, s5;                      //s4,s5也为结构体变量 - 全局变量
//int main()
//{
//	//struct student s1 = { "张三",18,"男",95.5f };
//	//printf("%s %d %s %.1f\n", s1.name, s1.age, s1.sex, s1.score);
//	struct student s1, s2, s3;//s1,s2,s3为结构体变量 - 局部变量
//
//	return 0;
//}



//结构体传参
//struct S
//{
//	int a;
//	char c;
//};
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//void Print1(struct P sp)
//{
//	//结构体变量.成员
//	printf("%lf %d %c %f\n", sp.d, sp.s.a, sp.s.c, sp.f);
//}
//void Print2(struct P* p1)
//{
//	//结构体指针->成员
//	printf("%lf %d %c %f\n", p1->d,p1->s.a,p1->s.c,p1->f);
//}
//int main()
//{
//	struct P p = { 5.5,{100,'f'},3.14f };
//	//printf("%lf %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//
//	Print1(p);  //传值调用
//	Print2(&p); //传址调用
//一般选Print2函数。
//原因：
//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//	return 0;
//}