#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//int a = 0;
//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//
//	// ;; -- 域作用限定域
//	printf("%d\n", ::a);//空白代表全局域
//	return 0;
//}




//int a = 0;
//namespace A//命名空间可以定义变量、函数、类型
//{
//	int a = 1;
//}//此处没有分号
//
////局部域->全局域->展开命名空间 或者 指定访问空间域
//
////展开命名空间域
//using namespace A;
//int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", A::a);//指定访问空间域
//	return 0;
//}
//
//


//namespace A
//{
//	int rand = 1;
//}
//
//int main()
//{
//	printf("%d\n", A::rand);
//	printf("%p\n", rand);//访问头文件中的rand
//	return 0;
//}




//命名空间可以嵌套
//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}


