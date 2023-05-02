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



//this指针
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	//C++编译器给每个“非静态的成员函数“增加了一个隐藏的指针参数，让该指针指向当前对象(函数运行时调用该函数的对象)，
//	//在函数体中所有“成员变量”的操作，都是通过该指针去访问。
//	//只不过所有的操作对用户是透明的，即用户不需要来传递，编译器自动完成。
//	/*void Print(Date* this)
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//		//this不能在形参和实参显示传递，但是可以在函数内部使用
//	}*/
//
//private:
//	int _year;		// 年
//	int _month;		// 月
//	int _day;		// 日
//};
//int main()
//{
//	Date d1, d2;
//	d1.Init(2022, 1, 11);
//	d2.Init(2022, 1, 12);
//	d1.Print();
//	d2.Print();
//	return 0;
//}



//this指针的特性
//1. this指针的类型：类类型 * const，即成员函数中，不能给this指针赋值。
//2. 只能在“成员函数”的内部使用
//3. this指针本质上是“成员函数”的形参，当对象调用成员函数时，将对象地址作为实参传递给this形参。所以对象中不存储this指针。
//4. this指针是“成员函数”第一个隐含的指针形参，一般情况由编译器通过ecx寄存器自动传递，不需要用户传递

