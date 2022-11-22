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