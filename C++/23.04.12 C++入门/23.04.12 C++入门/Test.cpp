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



//函数重载
//是函数的一种特殊情况，C++允许在同一作用域中声明几个功能类似的同名函数,
//这些同名函数的形参列表(参数个数 或 类型 或 类型顺序)不同，常用来处理实现功能类似数据类型不同的问题。
//对返回值没有要求

//#include<iostream>
//using namespace std;
//
//// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//
//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
// cout << "f(int a)" << endl;
//}
//
//
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//int main()
//{
//	Add(10, 20);
//	Add(10.1, 20.2);
//	f();
//	f(10);
//	f(10, 'a');
//	f('a', 10);
//	return 0;
//}

//无参调用可能存在歧义



//引用
//引用不是新定义一个变量，而是给已存在变量取了一个别名，编译器不会为引用变量开辟内存空间，它和它引用的变量共用同一块内存空间。
//语法：类型& 引用变量名(对象名) = 引用实体；（引用类型必须和引用实体是同种类型的）
//#include<iostream>
//using namespace std;

//int main()
//{
//	//a,b,c,d都是同一块空间
//	int a = 0;
//	int& b = a;
//	int& c = b;
//	int& d = a;
//
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//
//	b++;
//	d++;
//
//	int x = 1;
//	d = x;//这里是x赋值给d,C++的引用不改变指向
//
//	return 0;
//}


//注意：
//1. 引用在定义时必须初始化
//2. 一个变量可以有多个引用
//3. 引用一旦引用一个实体，再不能引用其他实体



//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 1, y = 0;
//	swap(x, y);
//	cout << x << endl;
//	cout << y << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//void swap(int*& a, int*& b)
//{
//	int* tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 1, y = 0;
//	int* px = &x, * py = &y;
//	cout << px << endl;
//	cout << py << endl;
//	swap(px, py);
//	cout << px << endl;
//	cout << py << endl;
//	return 0;
//}




//传值、传引用效率比较
//以值作为参数或者返回值类型，在传参和返回期间，函数不会直接传递实参或者将变量本身直
//接返回，而是传递实参或者返回变量的一份临时的拷贝，因此用值作为参数或者返回值类型，效
//率是非常低下的，尤其是当参数或者返回值类型非常大时，效率就更低。

//#include <time.h>
//#include<iostream>
//using namespace std;
//
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}



//常引用
//#include<iostream>
//using namespace std;

//int main()
//{
//	const int a = 0;
//	//int& b = a; 错误，a不能改变，引用的权限不能放大
//
//	const int c = 0;
//	int d = c;//c拷贝给d，d不影响a
//
//	int x = 0;
//	int& y = x;
//	const int& z = x;//正确，引用过程中权限可以平移或缩小
//	++x;//正确，作为x和y时可以修改
//	//++z; 错误，作为z时不能修改
//	cout << z << endl;
//
//	const int& m = 10;//正确，相当于为常量区别名
//
//	double dd = 1.11;
//	int ii = dd;
//	//发生类型转换时，都会产生临时变量，临时变量具有常性
//	//int& rii = dd; 错误
//	const int& rii = dd;//正确
//
//	return 0;
//}

//临时变量具有常性的例子
//int func1()
//{
//	static int x = 0;
//	return x;
//}
//int& func2()
//{
//	static int x = 0;
//	return x;
//}
//int main()
//{
//	//int& ret1 = func1(); 错误，权限放大
//	//int ret = func1();//正确，拷贝
//	const int& ret1 = func1();//正确，权限平移
//
//	int& ret2 = func2();//正确，权限平移
//	const int& ret3 = func2();//正确，权限缩小
//
//	return 0;
//}




//引用做返回值
//返回时不生成临时变量（减少拷贝，提高效率）
//使用场景
//1.很多场景都可以使用引用传参
//2.谨慎用引用作返回值。如果出了作用域后对象不在了就不能用引用返回

//1.传值返回
//int Count1()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}
////2.传引用返回
//
////错误：
////int& Count3()
////{
////	int n = 0;
////	n++;
////	// ...
////	return n;
////}
//
////正确：
//int& Count2()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;//返回n的别名(引用)
//}
//int main()
//{
//	int ret1 = Count1();
//	int ret2 = Count2();
//	return 0;
//}

