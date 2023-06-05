#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>


//int main()
//{
//	//C
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//
//	int* p2 = (int*)malloc(sizeof(int) * 10);
//	free(p2);
//
//	//C++
//	int* p3 = new int;//动态申请一个int类型的空间
//	delete p3;
//
//	int* p4 = new int(10);// 动态申请一个int类型的空间并初始化为10
//	delete p4;
//
//	int* p5 = new int[10];//动态申请10个int类型的空间
//	delete[] p5;
//
//	int* p5 = new int[10]{ 1,2,3 };//动态申请10个int类型的空间并初始化
//	delete[] p5;
//
//	return 0;
//}

// new/delete 和 malloc/free最大区别是 new/delete对于自定义类型除了开空间还会调用构造函数和析构函数
//struct ListNode
//{
//	int _val;
//	struct ListNode* _next;
//	ListNode(int x)
//		:_val(x)
//		, _next(NULL)
//	{}
//};
//int main()
//{
//	//开辟空间并调用构造函数进行初始化
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//	return 0;
//}

