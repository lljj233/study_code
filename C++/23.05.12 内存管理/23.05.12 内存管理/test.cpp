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
//	int* p3 = new int;//��̬����һ��int���͵Ŀռ�
//	delete p3;
//
//	int* p4 = new int(10);// ��̬����һ��int���͵Ŀռ䲢��ʼ��Ϊ10
//	delete p4;
//
//	int* p5 = new int[10];//��̬����10��int���͵Ŀռ�
//	delete[] p5;
//
//	int* p5 = new int[10]{ 1,2,3 };//��̬����10��int���͵Ŀռ䲢��ʼ��
//	delete[] p5;
//
//	return 0;
//}

// new/delete �� malloc/free��������� new/delete�����Զ������ͳ��˿��ռ仹����ù��캯������������
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
//	//���ٿռ䲢���ù��캯�����г�ʼ��
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//	return 0;
//}

