#define _CRT_SECURE_NO_WARNINGS 1


//static��Ա���ڲ���
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	int h;
//	static int k;
//public:
//	class B//��Ҳ�ܷ����޶��������ƣ��ڲ������ⲿ�����Ԫ
//	{
//		void func(const A& a)
//		{
//			cout << k << endl;
//			cout << a.h << endl;
//		}
//	private:
//		int b;
//	};
//};
////A����û��B������ΪB��δ��������B bb;��
//int A::k = 1;
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}



//��������
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//
//class Solution
//{
//public:
//	int Sum_Solution(int n)
//	{
//		//...
//		return n;
//	}
//};
//
//int main()
//{
//	A aa(1);//��������--���������ڵ�ǰ�����ֲ���
//	A(2);   //��������--���������ڵ�ǰ��
//
//	Solution s1;
//	s1.Sum_Solution(20);
//
//	Solution().Sum_Solution(20);
// 
//  //A& ra = A(1);//��������������г���
//  const A& ra = A(1);//��ȷ��const�����ӳ�������������������ڣ����������ڵ�ǰ�����ֲ���
// 
//  Solution().Sum_Solution(20);
//	return 0;
//}

