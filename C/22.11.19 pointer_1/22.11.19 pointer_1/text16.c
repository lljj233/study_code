#define _CRT_SECURE_NO_WARNINGS 1

//指针
//1.指针是内存中一个最小单元的编号，也就是地址
//2.平时的指针指的是指针变量，用来存放内存地址

#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;//取a的地址
//	//int占四个字节，取出的是第一个字节的地址（较小的地址）
//
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}
//虽然不同类型的指针字节都一样，但它们是有意义的
//1.指针类型决定了，指针进行解引用操作的时候一次性访问几个字节
//如果是char*的指针，解引用访问1个字节
//如果是char*的指针，解引用访问2个字节
//如果是int*的指针，解引用访问4个字节
//如果是float*的指针，解引用访问4个字节
//如果是double*的指针，解引用访问8个字节


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//int* 加1就是加4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//char* 加1就是加1个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pc = 1;
//		pc++;
//	}
//}
//指针类型决定指针的步长（指针+1跳过几个字节）
//字符指针+1，跳过1个字节
//整型指针+1，跳过4个字节