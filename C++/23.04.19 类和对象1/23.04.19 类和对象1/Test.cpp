#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
////C++����C��struc���������࣬������C++�и�ϲ����class
//struct Stack
//{
//	//��Ա����
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		capacity = capacity;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		//����
//		a[top--] = x;
//	}
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//
//	//��Ա����
//	int* a;
//	int top;
//	int capacity;
//};
//int main()
//{
//	struct Stack st1;
//	st1.Init(10);
//
//	Stack st2;
//	st2.Init();
//	st2.Push(1);
//	st2.Destroy();
//	return 0;
//}



//��ķ����޶���
//C++ʵ�ַ�װ�ķ�ʽ�����ཫ����������뷽�������һ�飬�ö���������ƣ�ͨ������Ȩ��ѡ���ԵĽ���ӿ��ṩ���ⲿ���û�ʹ��
//�����޶�����
//1. public     ����
//2. protected  ����
//3. private    ˽��

//�����޶���˵��
//1. public���εĳ�Ա���������ֱ�ӱ�����
//2. protected��private���εĳ�Ա�����ⲻ��ֱ�ӱ�����(�˴�protected��private�����Ƶ�)
//3. ����Ȩ��������Ӹ÷����޶������ֵ�λ�ÿ�ʼֱ����һ�������޶�������ʱΪֹ
//4. �������û�з����޶�����������͵� } ���������
//5. class��Ĭ�Ϸ���Ȩ��Ϊprivate��structΪpublic(��ΪstructҪ����C)

//#include<iostream>
//struct Stack
//{
//public:
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		capacity = capacity;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		//����
//		a[top--] = x;
//	}
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//	
//private:
//	int* a;
//	int top;
//	int capacity;
//};
//int main()
//{
//	struct Stack st1;
//	st1.Init(10);
//	
//	Stack st2;
//	st2.Init();
//	st2.Push(1);
//	st2.Destroy();
//	return 0;
//}



//��������Ͷ���
//������ֶ��巽ʽ��
//1.�����Ͷ���ȫ�����������У���ע�⣺��Ա������������ж��壬���������ܻὫ�䵱��������������
//2.����������.h�ļ��У���Ա�����������.cpp�ļ��У�ע�⣺��Ա������ǰ��Ҫ������::
//һ���õڶ��ֺ�һЩ



//���������Ĵ�С
#include<iostream>
using namespace std;
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};
//int main()
//{
//	A a;
//	cout << sizeof(a) << endl;
//	cout << sizeof(A) << endl;
//	//���Ա�����������Ա����
//	return 0;
//}



//�����Ĵ洢
//���м��г�Ա���������г�Ա����
//class A1 
//{
//public:
//	void f1() {}
//private:
//	int _a;
//};
//// ���н��г�Ա����
//class A2 
//{
//public:
//	void f2() {}
//};
//// ����ʲô��û��---����
////����Ƚ����⣬���������˿���һ���ֽ���Ψһ��ʶ�����Ķ���
//class A3
//{};
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	return 0;
//}
//һ����Ĵ�С��ʵ�ʾ��Ǹ����С���Ա������֮�ͣ���ȻҪע���ڴ����

