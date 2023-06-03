#define _CRT_SECURE_NO_WARNINGS 1


//static成员和内部类
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	int h;
//	static int k;
//public:
//	class B//类也受访问限定符的限制，内部类是外部类的友元
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
////A类中没有B对象，因为B类未创建对象（B bb;）
//int A::k = 1;
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}

