#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
////C++兼容C，struc升级成了类，不过在C++中更喜欢用class
//struct Stack
//{
//	//成员函数
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		capacity = capacity;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		//扩容
//		a[top--] = x;
//	}
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//
//	//成员变量
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



//类的访问限定符
//C++实现封装的方式：用类将对象的属性与方法结合在一块，让对象更加完善，通过访问权限选择性的将其接口提供给外部的用户使用
//访问限定符：
//1. public     公有
//2. protected  保护
//3. private    私有

//访问限定符说明
//1. public修饰的成员在类外可以直接被访问
//2. protected和private修饰的成员在类外不能直接被访问(此处protected和private是类似的)
//3. 访问权限作用域从该访问限定符出现的位置开始直到下一个访问限定符出现时为止
//4. 如果后面没有访问限定符，作用域就到 } 即类结束。
//5. class的默认访问权限为private，struct为public(因为struct要兼容C)

//#include<iostream>
//struct Stack
//{
//public:
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		capacity = capacity;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		//扩容
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



//类的声明和定义
//类的两种定义方式：
//1.声明和定义全部放在类体中，需注意：成员函数如果在类中定义，编译器可能会将其当成内联函数处理。
//2.类声明放在.h文件中，成员函数定义放在.cpp文件中，注意：成员函数名前需要加类名::
//一般用第二种好一些



//计算类对象的大小
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
//	//算成员变量，不算成员函数
//	return 0;
//}



//类对象的存储
//类中既有成员变量，又有成员函数
//class A1 
//{
//public:
//	void f1() {}
//private:
//	int _a;
//};
//// 类中仅有成员函数
//class A2 
//{
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
////空类比较特殊，编译器给了空类一个字节来唯一标识这个类的对象
//class A3
//{};
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	return 0;
//}
//一个类的大小，实际就是该类中”成员变量”之和，当然要注意内存对齐

