#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//int a = 0;
//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//
//	// ;; -- 域作用限定域
//	printf("%d\n", ::a);//空白代表全局域
//	return 0;
//}




//int a = 0;
//namespace A//命名空间可以定义变量、函数、类型
//{
//	int a = 1;
//}//此处没有分号
//
////局部域->全局域->展开命名空间 或者 指定访问空间域
//
////展开命名空间域
//using namespace A;
//int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", A::a);//指定访问空间域
//	return 0;
//}
//
//


//namespace A
//{
//	int rand = 1;
//}
//
//int main()
//{
//	printf("%d\n", A::rand);
//	printf("%p\n", rand);//访问头文件中的rand
//	return 0;
//}




//命名空间可以嵌套
//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}



//命名空间的使用有三种方式：
//namespace N
//{
//	int a = 0;
//	int b = 0;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//
////1.加命名空间名称及作用域限定符
//int main()
//{
//	printf("%d\n", N::a);
//	return 0;
//}
//
//
////2.使用using将命名空间中某个成员引入
//using N::b;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	return 0;
//}
//
//
////3.使用using namespace 命名空间名称引入
//using namespace N;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}



//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main()
//{
//	int x = 0;
//	double y = 3.14;
//
//	//流插入运算符
//	cout << "abc" << endl;
//	cout << "abc" << "def" << endl;
//	cout << "abc" << "def" << x << endl;
//	cout << y << endl;//自动识别类型
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	double y = 0;
//
//	//流提取运算符
//	cin >> x >> y;
//	cout << x << " " << y << endl;//y的精度丢失
//	return 0;
//}



//缺省参数

//#include<iostream>
//using namespace std;

//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func();    //没有传参时，使用参数的默认值
//	Func(10);  //传参时，使用指定的实参
//	return 0;
//}

//全缺省参数(所有的参数都给了缺省值)
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func();
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//
//	return 0;
//}

//半缺省参数(部分的参数都给了缺省值)
//从右往左缺省
//void Func(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//Func();  //error
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}

//注意：
//1. 半缺省参数必须从右往左依次来给出，不能间隔着给
//2. 缺省参数不能在函数声明和定义中同时出现(声明给，定义不给)
//3. 缺省值必须是常量或者全局变量
//4. C语言不支持（编译器不支持）