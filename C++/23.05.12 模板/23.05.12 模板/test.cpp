#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//模板
//函数模板 + 类模板
//template<typename T>
//template<typename Ty>
//template<typename Tp>

//template<typename T>  //模板参数
////typename是用来定义模板参数关键字，也可以使用class(切记：不能使用struct代替class)
//
//void Swap(T& x1, T& x2)
//{
//	T tmp = x1;
//	x1 = x2;
//	x2 = tmp;
//}
////函数模板实例化生成具体函数
////函数模板根据调用，自己推导函数模板参数的类型，实例化出对应的函数
// 
////定义多个模板参数
//template<typename T1,typename T2>
//void func(const T1& x1, const T2& x2)
//{
//	cout << x1 << " " << x2 << endl;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	double c = 1.1, d = 2.2;
//	Swap(a, b);
//	Swap(c, d);
//	cout << a << " " << b << endl;
//	cout << c << " " << d << endl;
//
//	func(a,b);
//	func(c, d);
//
//	return 0;
//}

