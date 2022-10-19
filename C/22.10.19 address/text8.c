#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0;//向内存申请四个字节
//	int* p = &a;//p是一个存放地址的变量，地址又叫指针，所以把p叫做指针变量（存放指针的变量）
//
//	*p = 20;//解引用操作，作用是通过p中的地址找到a；*p就是a，即a=20;
//	printf("%d\n", a);
//
//	printf("%p\n", &a);//取出的是a所占四个字节中第一个字节的地址
//	printf("%p\n", p);
//	return 0;
//}




//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("%c\n", ch);
//	return 0;
//}




//一个指针变量的大小
//指针变量的大小取决于地址的大小
//32位机器下的地址需要存储32bit位，即4个字节
//64位机器下的地址需要存储64bit位，即8个字节

//int main()
//{
//	char* a;
//	int* b;
//	float* c;
//
//
//	//x86运行结果为4
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(c));
//
//
//	//x64运行结果为8
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(b));
//	printf("%zd\n", sizeof(c));
//
//	return 0;
//}