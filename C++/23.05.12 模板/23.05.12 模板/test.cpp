#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//ģ��
//����ģ�� + ��ģ��
//template<typename T>
//template<typename Ty>
//template<typename Tp>

//template<typename T>  //ģ�����
////typename����������ģ������ؼ��֣�Ҳ����ʹ��class(�мǣ�����ʹ��struct����class)
//
//void Swap(T& x1, T& x2)
//{
//	T tmp = x1;
//	x1 = x2;
//	x2 = tmp;
//}
////����ģ��ʵ�������ɾ��庯��
////����ģ����ݵ��ã��Լ��Ƶ�����ģ����������ͣ�ʵ��������Ӧ�ĺ���
// 
////������ģ�����
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



//����ģ��ʵ����: 1.��ʽʵ���� 2.��ʽʵ����
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
//	//��������������ʵ����ʱ����Ҫ������ʵ������ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble����
//	//��ģ������б���ֻ��һ��T���������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	//����ʽ��
//	//1. �û��Լ���ǿ��ת��
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//	//2. ʹ����ʽʵ����
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	return 0;
//}



//��ģ��
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
//	//����...
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



//��ģ��������Ͷ���
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3);//���캯�������Ͷ������
//
//	void push(const T& data)
//	{
//		_array[_size] = data;
//		_size++;
//	}
//	//����...
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
////������ͨ����˵��������������һ����
//
////������ģ����˵�����������Ͳ�һ��
////������Stack
////���ͣ�Stack<T>
//
//int main()
//{
//	Stack<int>s1;
//	Stack<double>s2;
//	Stack<char>s3;
//
//	return 0;
//}

