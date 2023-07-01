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



//函数模板实例化: 1.隐式实例化 2.显式实例化
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//
//	//cout << Add(a1, d1) << endl;
//	//当编译器看到该实例化时，需要推演其实参类型通过实参a1将T推演为int，通过实参d1将T推演为double类型
//	//但模板参数列表中只有一个T，编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	//处理方式：
//	//1. 用户自己来强制转化
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//	//2. 使用显式实例化
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	return 0;
//}



//类模板
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		_array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void push(const T& data)
//	{
//		_array[_size] = data;
//		_size++;
//	}
//	//其他...
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	T* _array;
//	int _capacity;
//	int _size;
//};
//int main()
//{
//	Stack<int>s1;
//	Stack<double>s2;
//	Stack<char>s3;
//
//	return 0;
//}



//类模板的声明和定义
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3);//构造函数声明和定义分离
//
//	void push(const T& data)
//	{
//		_array[_size] = data;
//		_size++;
//	}
//	//其他...
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	T* _array;
//	int _capacity;
//	int _size;
//};
//template<class T>
//Stack<T>::Stack(size_t capacity)
//{
//	_array = new T[capacity];
//	_capacity = capacity;
//	_size = 0;
//}
//
////对于普通类来说，类名和类型是一样的
//
////对于类模板来说，类名和类型不一样
////类名：Stack
////类型：Stack<T>
//
//int main()
//{
//	Stack<int>s1;
//	Stack<double>s2;
//	Stack<char>s3;
//
//	return 0;
//}

