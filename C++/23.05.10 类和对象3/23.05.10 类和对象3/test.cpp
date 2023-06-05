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



//匿名对象
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
//	A aa(1);//有名对象--生命周期在当前函数局部域
//	A(2);   //匿名对象--生命周期在当前行
//
//	Solution s1;
//	s1.Sum_Solution(20);
//
//	Solution().Sum_Solution(20);
// 
//  //A& ra = A(1);//错误，匿名对象具有常性
//  const A& ra = A(1);//正确，const引用延长了匿名对象的生命周期，生命周期在当前函数局部域
// 
//  Solution().Sum_Solution(20);
//	return 0;
//}

