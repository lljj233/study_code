//判断x是否大于y
/*
#include <iostream>
using namespace std;
bool larger(int x,int y);
int main()
{
	int x, y;
	bool t;
	cout << "输入x，y的值:\n";
	cin >> x >> y;
	t = larger(x, y);
	cout << t << " " << boolalpha << t << " " << noboolalpha << t << endl;
	if (t)
		cout << x << "-" << y << "=" << x - y << endl;
	else
		cout << x << "+" << y << "=" << x + y << endl;
	return 0;
}
bool larger(int x, int y)
{
	if (x > y)
		return true;
	return false;
}
*/



//普通对象


/*
#include <iostream>
using namespace std;
class Date//定义了一个Date类型
{
private:
	int year, month, day;//数据成员
public:
	Date(int y, int m, int d)//构造（含三个参数的）函数
	{
		year = y;
		month = m;
		day = d;
		cout << "构造函数" << endl;
	}
	Date(const Date& t)//拷贝构造函数
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "拷贝构造函数" << endl;
	}
	~Date()//析构函数
	{
		cout << "析构函数" << endl;
	}
	void show()//普通成员函数
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};

int main()
{
	Date d1(2022, 1, 1);
	//cout << d.y;//错误，私有类型不能直接访问
	d1.show();
	//Date d2;错误，会调用不带参的构造函数
	//d1=d2;
	Date d2 = d1;
	d2.show();
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
class Date//定义了一个Date类型
{
private:
	int year, month, day;//数据成员
public:
	Date(int y=0, int m=0, int d=0)//构造（带缺省参数的）函数
	{
		year = y;
		month = m;
		day = d;
		cout << "构造函数" << endl;
	}
	Date(const Date& t)//拷贝构造函数
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "拷贝构造函数" << endl;
	}
	~Date()//析构函数
	{
		cout << "析构函数" << endl;
	}
	void show()//普通成员函数
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};

int main()
{
	Date d1(2022, 1, 1);
	//cout << d.y;//错误，私有类型不能直接访问
	d1.show();
	Date d2;
	d2=d1;//与Date d2 = d1;不一样
	//Date d2 = d1;
	d2.show();
	return 0;
}
*/



//指针对象,对象数组


/*
#include <iostream>
using namespace std;
class Date
{
private:
	int year,month, day;
public:
	Date()
	{
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y , int m , int d )
	{
		year = y;
		month = m;
		day = d;
		cout << "构造函数" << endl;
	}
	Date(const Date& t)//拷贝构造函数
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "拷贝构造函数" << endl;
	}
	~Date()//析构函数
	{
		cout << "析构函数" << endl;
	}
	void show()//普通成员函数
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};

int main()
{
	Date d1(2022, 1, 1);
	Date* p;//对象指针
	p = &d1;
	d1.show();
	p->show();
	(*p).show();
	Date q[3] = { Date(1,1,1),Date(2,2,2),Date() };//q[3]为对象数组
	q[2].show();
	Date &w = d1;//对象引用
	w.show();//等价于d1.show()
	Date* qq = new Date(2003,1,1);//动态申请对象
	qq->show();
	delete qq;//不用时撤销，释放空间
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date()
	{
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
		cout << "构造函数" << endl;
	}
	Date(const Date& t)//拷贝构造函数
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "拷贝构造函数" << endl;
	}
	~Date()//析构函数
	{
		cout << "析构函数" << endl;
	}
	void show()//普通成员函数
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};
class Person
{
	string name;
	int age;
	char gender;
	Date date;
public:
	Person(string n, int a, char g, int y, int m, int d) :date(y, m, d)
	{
		name= n;
		age = a;
		gender = g;
	}
	void show()
	{
		cout << name << "\t" << age << "\t" << gender<<"\t`";
		date.show();
	}
};
int main()
{
	Person p("Li", 18, 'M', 2003, 1, 1);
	p.show();
	return 0;
}
*/



//const,static
/*
#include <iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date()
	{
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
		cout << "构造函数" << endl;
	}
	Date(const Date& t)
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "拷贝构造函数" << endl;
	}
	~Date()
	{
		cout << "析构函数" << endl;
	}
	void show()const//常成员函数
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};
class Person
{
	string name;
	int age;
	char gender;
	Date date;
public:
	static int count;//统计创建对象的个数，是一个静态的全局变量(数据成员)
	Person(string n, int a, char g, int y, int m, int d) :date(y, m, d)
	{
		name = n;
		age = a;
		gender = g;
		count++;
	}
	void show()const//常成员函数
	{
		cout << name << "\t" << age << "\t" << gender << "\t`";
		date.show();
		cout << "Person个数：" << count << endl;
	}
	~Person()
	{
		count--;
	}
};
int Person::count = 0;//静态变量要在类的外面对它进行初始化
int main()
{
	const Person p1("Li", 18, 'M', 2003, 1, 1), p2("Liu", 19, 'W', 2002, 1, 1);//无法修改
	cout << p1.count << endl;
	p1.show();//常对象只能调用常成员函数
	return 0;
}
*/



//引用

/*
#include <iostream>
using namespace std;
int main()
{
//引用的基本语法：数据类型 &别名=原名
    
	int a = 10;

 //创建引用
    int &b = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	system("pause");
    return 0;
}
*/


//引用的注意事项

/*
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
//int& b 错误，引用必须初始化
	int& b = a;
	int c = 20;
//int& b = c; 错误，引用在初始化后不能改变
	return 0;
}
*/


//引用作函数参数
/*
#include <iostream>
using namespace std;

//交换函数：

//1.值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
	cout << "--------------" << endl;
}

//2.地址传递
void swap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void swap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	//swap01(a, b);//值传递，形参不会修饰实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "--------------" << endl;

	//swap02(&a, &b);//地址传递，形参会修饰实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "--------------" << endl;

	//swap03(a, b);//引用传递，形参会修饰实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "--------------" << endl;
	return 0;
}
*/


//引用作函数的返回值
/*
#include <iostream>
using namespace std;

//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;//局部变量存放在四区中的栈区
	return a;
}

int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后释放
	return a;
}
int main()
{
    int& ref1 = test01();
	cout << "ref1=" << ref1 << endl;//第一次结果正确，是因为编译器做了保留
	cout << "ref1=" << ref1 << endl;//第二次结果错误，因为a的内存已经释放

	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	//函数的调用可以作为左值
	test02() = 1000;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	return 0;
}
*/


//常量引用(用来修饰形参，防止误操作)
/*
#include <iostream>
using namespace std;
int main()
{
	//int a = 10;
    //int& ref = 10;错误，引用必须引一块合法的内存空间

	//加上const之后编译器将代码修改 int temp=10; const int &ref=temp;
	const int& ref = 10;
	return 0;
}
*/


/*
#include <iostream>
using namespace std;
//打印数据函数
void showvalue(const int& val)//加上const后数据无法被修改
{
	//val = 1000;误操作，打印函数不需要修改值
	cout << "val=" << val << endl;
}

int main()
{
	int a = 10;
	showvalue(a);
	cout << "a" << a << endl;
	return 0;
}
*/



//函数的默认参数  语法：返回值类型 函数名 （形参=默认值）{}
/*
#include <iostream>
using namespace std;
int func(int a, int b= 20, int c= 30)
{
	return a + b + c;
}
//注意事项：
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左往右都必须有默认值
//2.如果函数声明有了默认参数，函数实现就不能有默认参数，声明和实现只能有一个有默认参数
int func1(int a=10, int b=10)//函数声明
int func1(int a, int b)//函数实现
{
	return a + b;
}
int main()
{
	cout << func(10) << endl;
	cout << func(10,30) << endl;//如果传入自己的数据就用自己的数据，否则用默认值
	return 0;
}
*/


//函数的占位参数  语法：返回值类型 函数名 （数据类型）{}
/*
#include <iostream>
using namespace std;
void func(int a,int)//第二个int位
{
	cout << "abcd" << endl;
}
int main()
{
	func(10,10);
	return 0;
}
*/


//函数重载（函数名可以相同，但需要满足一定条件）
//1.同一个作用域下
//2.函数名相同
//3.函数参数类型不同或个数不同或顺序不同

/*
#include <iostream>
using namespace std;
void func()
{
	cout << "func的调用" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用" << endl;
}
void func(double a)
{
cout << "func(double a)的调用" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)的调用" << endl;
}
void func(double a, int b)
{
	cout << "func(double a,int b)的调用" << endl;
}
//函数的返回值不可以作为函数重载的条件

//int func(double a, int b)
//{
//	cout << "func(double a,int b)的调用" << endl;
//}

int main()
{
	func();
	func(10);
	func(3.14);
	func(10,3.14);
	func(3.14,10);
	return 0;
}
*/


//函数重载的注意事项
/*
#include <iostream>
using namespace std;
//1.引用作为重载的条件
void func(int &a)//int &a=10;  不合法
{
	cout << "func(int &a)的调用" << endl;
}
void func(const int& a)// const int& a=10;  合法
{
	cout << "func(const int &a)的调用" << endl;
}
//2.函数重载碰到默认参数
void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}
void func2(int a,int b=10)
{
	cout << "func2(int a,int b)的调用" << endl;
}
int main()
{
	int a = 10;
	func(a);
	func(10);
	//func2(10); 出现二义性
	func2(10,20);
	return 0;
}
*/


//封装
/*
#include <iostream>
using namespace std;
const double pi = 3.14;
//设计一个圆类，求圆的周长 2*pi*半径
//class代表设计一个类，类后面紧跟着类名称
//类中的属性和行为统一称为成员
//属性也称为成员属性，成员变量
//行为也称为成员函数，成员方法
class circle
{
public:
	int r;//属性
	double zc()//行为
	{
		return 2 * pi * r;
	}
};
int main()
{
	circle c1;//通过圆类创建一个具体的对象(圆),也叫实例化
	c1.r = 3;
	cout << "C=" << c1.zc() << endl;
	return 0;
}
*/


//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示姓名和学号
/*
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
	string name;
	int num;
	void show()
	{
		cout <<"name is "<< name << endl;
		cout <<"num is "<<num << endl;
	}
	void setname(string NAME)//给姓名赋值
	{
		name = NAME;
	}
	void setnum(int NUM)//给学号赋值
	{
		num = NUM;
	}
};
int main()
{
	student s1;
	//s1.name = "Li";
	s1.setname ("Li");

	//s1.num = 11;
	s1.setnum(11);

	s1.show();
	cout << "----------" << endl;
	return 0;
}
*/


//封装的访问权限
/*
#include <iostream>
#include <string>
using namespace std;
//公共权限  public     成员  类内可以访问，类外可以访问
//保护权限  protected  成员  类内可以访问，类外不可以访问
//私有权限  private    成员  类内可以访问，类外不可以访问
class person
{
public:
	string name;
protected:
	string car;
private:
	int password;
public:
	void func()
	{
		name = "li";
		car = "aodi";
		password = 123456;
		cout << "name is " << name << endl;
		cout << "car is " << car << endl;
		cout << "password is " << password << endl;
	}
};
int main()
{
	person p1;
	p1.func();
	p1.name = "zhang";
	//p1.car = "baoma"; 保护权限的内容在类外访问不到
	//p1.password = 123;私有权限的内容在类外访问不到
	return 0;
}
*/



//struct和class的区别
//struct的默认权限为公有，class的默认权限为私有
/*
#include <iostream>
using namespace std;
class student1
{
	int a;//默认权限为私有,类外访问不到
};
struct student2
{
	int a;//默认权限为公有.类外可以访问
};
int main()
{
	student1 s1;
	//s1.a = 100;
	student2 s2;
	s2.a = 10;
	return 0;
}
*/



//成员属性设为私有
//1.可以控制读写权限

/*
#include <iostream>
#include <string>
using namespace std;
class person
{
public:
	void setname(string NAME)//写姓名
	{
		name = NAME;
	}
	string getname()//读姓名
	{
		return name;
	}

	int getage()//读年龄
	{
		age = 18;
		return age;
	}

	void setclassmate(string CLASSMATE)//写姓名
	{
		classmate = CLASSMATE;
	}
private:
	string name;//可读可写
	int age;//只读
	string classmate;//只写
};
int main()
{
	person p1;
	p1.setname ("li");
	p1.setclassmate("liu");
	cout << "name is :" << p1.getname() << endl;
	cout << "age is :" << p1.getage() << endl;
	//cout << "classmate is :" << p1.classmate << endl;  不可访问

	p1.setage(1000);
	return 0;
}
*/



//2.对于写，可以检测数据的有效性
/*
#include <iostream>
#include <string>
using namespace std;
class person
{
public:
	
	int getage()
	{
		return age;
	}

	void setage(int AGE)
	{
		if (AGE < 0 || AGE>150)
		{
			age = 0;
			cout << "input erupt" << endl;
			return;
		}
		age = AGE;
	}
	
private:
	int age;
};
int main()
{
	person p1;
	p1.setage(18);
	cout << "age is :" << p1.getage() << endl;
	return 0;
}
*/



//设计立方体类并求其面积和体积
/*
#include <iostream>
using namespace std;
class lft
{
public:
	int c;
	int k;
	int g;
	int mj()
	{
		return (c * k + c * g + k * g) * 2;
	}
	int tj()
	{
		return c * k * g;
	}
};
bool ifsame(lft &s1, lft &s2)
{
	if (s1.c == s2.c && s1.g == s2.g && s1.k == s2.k)
	{
		return true;
	}
	return false;
}
int main()
{
	lft s1;
	s1.c = 2;
	s1.g = 3;
	s1.k = 4;
	cout << "S= " << s1.mj() << endl;
	cout << "V= " << s1.tj() << endl;

	lft s2;
	s2.c = 2;
	s2.g = 3;
	s2.k = 4;

	bool result = ifsame(s1, s2);
	{
		if (result)
		{
			cout << "s1=s2" << endl;
		}
		else 
		{
			cout << "s1!=s2" << endl;
		}
	}

	return 0;
}
*/



//对象的初始化和清理
//构造函数初始化   析构函数清理
/*
#include <iostream>
using namespace std;
class person
{
public:

	//构造函数
	//没有返回值，不用写void
	//函数名与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象时构造函数会自动调用且只会调用一次
	person()
	{
		cout << "person构造函数的调用" << endl;
	}


	//析构函数
	//没有返回值，不用写void
	//函数名与类名相同，函数名前有~
	//构造函数不可以有参数，不可以发生重载
	//对象在销毁前会自动调用且只会调用一次
	~person()
	{
		cout << "person析构函数的调用" << endl;
	}
};

//构造函数和析构函数都是必须要有的实现，如果自己不提供，编译器会提供一个空实现的构造和析构

void test01()
{
	person p;//在栈区上的数据，test01执行完毕后就会释放这个对象
}
int main()
{
	test01();
	//person p;
	system("pause");
	return 0;
}
*/


/*
#include<iostream>
using namespace std;

class Matrix 
{                           //矩阵类
private:
	int row, column;        //成员变量行和列
	int pt[10][10];         //定义一个最大为10×10的矩阵
public:
	Matrix();				//构造函数初始化矩阵行和列
	Matrix(int r, int c);
	~Matrix();
	Matrix operator+(Matrix& x);		  //矩阵+运算，双目
	Matrix operator-(Matrix& x);		  //矩阵-运算，双目
	Matrix operator*(const Matrix& x);    //矩阵*运算，双目
	Matrix operator=(const Matrix& x);    //声明重载“=”运算符
	void Set_rowcol(int m, int n);         //设置矩阵行和列
	void SetMatrix();					  //设置矩阵元素
	void ShowMatrix();					  //输出矩阵
};

Matrix::Matrix() {						  //构造函数初始化矩阵行和列
	row = 0; column = 0;
}

Matrix::Matrix(int r, int c) :row(r), column(c) {   //构造函数重载，初始化矩阵元素
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			pt[i][j] = 0;
}
Matrix::~Matrix() {}   //析构函数

Matrix Matrix::operator+(Matrix& x) {    //矩阵+运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			temp.pt[i][j] = pt[i][j] + x.pt[i][j];
	}
	return temp;
}
Matrix Matrix::operator-(Matrix& x) {    //矩阵-运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			temp.pt[i][j] = pt[i][j] - x.pt[i][j];
	}
	return temp;
}
Matrix Matrix::operator*(const Matrix& x) {    //矩阵*运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			for (int k = 0; k < row; k++)
				temp.pt[i][j] += pt[i][k] * x.pt[k][j];
		}
	}
	return temp;
}
Matrix Matrix::operator=(const Matrix& x) {  //复制运算符=重载，只能重载为成员函数
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			(*this).pt[i][j] = x.pt[i][j];
	return *this;
}

void Matrix::Set_rowcol(int m, int n) {
	row = m;
	column = n;
}

void Matrix::SetMatrix() {      //设置矩阵元素
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> pt[i][j];
		}
	}
}
void Matrix::ShowMatrix() {     //输出矩阵
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			cout << pt[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int i1, j1, i2, j2;
	Matrix m1, m2, m3;

	cout << "输入第一个矩阵m1的行和列:" << endl;
	cin >> i1 >> j1;
	m1.Set_rowcol(i1, j1);
	cout << "请输入第一个矩阵m1元素：" << endl;
	m1.SetMatrix();

	cout << "输入第二个矩阵m2的行和列:" << endl;
	cin >> i2 >> j2;
	m2.Set_rowcol(i2, j2);
	cout << "请输入第二个矩阵m2元素：" << endl;
	m2.SetMatrix();

	m3.Set_rowcol(i1, j2);  //结果矩阵的行是m1的行，列是m2的列

	m3 = m1 + m2;
	cout << "m3=m1+m2:" << endl;
	m3.ShowMatrix();

	m3 = m1 - m2;
	cout << "m3=m1-m2:" << endl;
	m3.ShowMatrix();

	m3 = m1 * m2;
	cout << "m3=m1*m2:" << endl;
	m3.ShowMatrix();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
class nothing
{
public:
	static void func()
	{
		a = 10;
		cout << "静态成员函数的调用"  << endl;
		cout << "a=" << a << endl;
	}
	static int a;
};
int nothing::a = 10;
void test()
{
	nothing p;
	p.func();
}
int main()
{
	test();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
class person
{
public:
	person operator + (person & p)
	{
		person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
	int m_a;
	int m_b;
};
void test()
{
	person p1;
	person p2;
	p1.m_a = 13;
	p1.m_b = 19;
	p2.m_a = 15;
	p2.m_b = 17;
	person p3 = p1 + p2;
	cout << p3.m_a << endl;
	cout << p3.m_b << endl;
}
int main()
{
	test();
	return 0;
}
*/



/*
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
person operator * (person& p1, person& p2)
{
	person temp;
	temp.m_a = p1.m_a * p2.m_a;
	temp.m_b = p1.m_b * p2.m_b;
	return temp;
}
person operator + (person& p1,int num)
{
	person temp;
	temp.m_a = p1.m_a + num;
	temp.m_b = p1.m_b + num;
	return temp;
}
void test()
{
	person p1;
	person p2;
	p1.m_a = 13;
	p1.m_b = 19;
	p2.m_a = 15;
	p2.m_b = 17;
	person p3 = p1 * p2;
	cout << p3.m_a << endl;
	cout << p3.m_b << endl;
	person p4 = p1 + 20;
	cout << p4.m_a << endl;
	cout << p4.m_b << endl;
}
int main()
{
	test();
	return 0;
}
*/



/*
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
ostream &operator << (ostream &cout,person p)
{
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	return cout;
}
void test()
{
	person p;
	p.m_a = 100;
	p.m_b = 200;
	cout << p << endl;
	
}
int main()
{
	test();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
class person
{
	friend ostream& operator << (ostream& cout, person p);
private:
	int m_num;
public:
	person()
	{
		m_num = 0;
	}
	person &operator++()
	{
		m_num++;//先++
		return *this;//再返回
	}
};
ostream& operator << (ostream& cout, person p)
{
	cout << p.m_num << endl;
	return cout;
}
void test()
{
	person p;
	cout << ++p << endl;
}
int main()
{
	test();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
class person
{
	friend ostream& operator << (ostream& cout, person p);
private:
	int m_num;
public:
	person()
	{
		m_num = 0;
	}
	person operator++(int)//int占位参数来区分前置和后置递增
	{
		person temp = *this;//先记录当前值
		m_num++;//后递增
		return temp;//最后将记录结果返回
	}
};
ostream &operator << (ostream& cout, person p)
{
	cout << p.m_num << endl;
	return cout;
}
void test()
{
	person p;
	cout << p++ << endl;
	cout << p << endl;
}
int main()
{
	test();
	return 0;
}
*/



/*
#include<iostream>
#include<string>
using namespace std;
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	bool operator==(person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}
	string m_name;
	int m_age;
};
void test()
{
	person p1("li", 18);
	person p2("wang", 18);
	if (p1 == p2)
	{
		cout << "p1=p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	test();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
class Base
{
public:
	virtual void Examp() = 0;//纯虚函数

	~Base()
	{
		cout << "父类的析构函数" << endl;
	}
};

class Son :public Base
{
public:
	void Examp()
	{
		cout << "重写了父类的纯虚函数" << endl;
	}

	~Son()
	{
		cout << "子类的析构函数" << endl;
	}
};

int main()
{
	Son p1;
	p1.Examp();
	system("pause");
}
*/



/*
#include <iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle(float speed, int total)
	{
		Vehicle::speed = speed;
		Vehicle::total = total;
	}
	virtual void ShowMember() = 0;//纯虚函数的定义
protected:
	float speed;
	int total;
};
class Car :public Vehicle
{
public:
	Car(int aird, float speed, int total) :Vehicle(speed, total)
	{
		Car::aird = aird;
	}
	virtual void ShowMember()//派生类成员函数重载
	{
		cout << speed << "|" << total << "|" << aird << endl;
	}
protected:
	int aird;
};

int main()
{
	//Vehicle a(100,4);//错误,抽象类不能创建对象
	Car b(250, 150, 4);
	b.ShowMember();
	system("pause");
}
*/



/*
#include<iostream>
using namespace std;

class Matrix
{                           //矩阵类
private:
	int row, column;        //成员变量行和列
	int max[10][10] = {0};         //定义一个最大为10×10的矩阵
	int** array;
public:
	Matrix();				//构造函数初始化矩阵行和列
	Matrix(int r, int c);
	~Matrix();
     Matrix operator+(Matrix& x);		  //声明重载“+”运算符
	Matrix operator-(Matrix& x);		  //声明重载“-”运算符
	Matrix operator*(const Matrix& x);    //声明重载“*”运算符
	Matrix operator=(const Matrix& x);    //声明重载“=”运算符
	friend ostream& operator<<(ostream& cout, Matrix x);//声明重载“<<”运算符
	void Set_rowandcol(int m, int n);         //设置矩阵行和列
	void SetMatrix();					  //设置矩阵元素
	void ShowMatrix();					  //输出矩阵
	int* operator[](int rows)
	{
		return array[rows];
	}
};



ostream& operator<<(ostream& cout, Matrix x)//声明重载“<<”运算符
{
	for (int i = 0; i < x.row; i++)
	{
		for (int j = 0; j < x.column; j++)
		
			cout << x.max[i][j] << " ";
			cout << endl;
	}
	return cout;
}


Matrix::Matrix()
{						  //构造函数初始化矩阵行和列
	//row = 0;
	//column = 0;
	row = 10; column = 10;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++) 
		{
			max[i][j] = 0;

		}
	}

	array = new int* [row];
	for (int i = 0; i < row; i++) 
	{
		array[i] = new int[column];

	}
}

Matrix::Matrix(int r, int c) :row(r), column(c)
{   //构造函数重载，初始化矩阵元素
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			max[i][j] = 0;
	array = new int* [r];
	for (int i = 0; i < r; i++)
	{
		array[i] = new int[c];
	}
}

Matrix::~Matrix()  //析构函数
{
	for (int i = 0; i < row; i++)
	{
		delete[] array[i];
    }
	delete[] array;
}  

Matrix Matrix:: operator+(Matrix& x)
{    //矩阵+运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			temp.max[i][j] = max[i][j] + x.max[i][j];
	}
	return temp;
}

Matrix Matrix::operator-(Matrix& x) 
{    //矩阵-运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < column; j++)
			temp.max[i][j] = max[i][j] - x.max[i][j];
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix& x) 
{    //矩阵*运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = 0; k < row; k++)
				temp.max[i][j] += max[i][k] * x.max[k][j];
		}
	}
	return temp;
}

Matrix Matrix::operator=(const Matrix& x) 
{  //复制运算符=重载，只能重载为成员函数
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			(*this).max[i][j] = x.max[i][j];
	return *this;
}

void Matrix::Set_rowandcol(int m, int n)
{
	row = m;
	column = n;
}

void Matrix::SetMatrix()
{      //设置矩阵元素
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < column; j++)
		{
			cin >> max[i][j];
		}
	}
}

//void Matrix::ShowMatrix() 
//{     //输出矩阵
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//			cout << max[i][j] << " ";
//		cout << endl;
//	}
//}

int main()
{
	int i1, j1, i2, j2;
	Matrix m1, m2, m3;

	cout << "输入第一个矩阵m1的行和列:" << endl;
	cin >> i1 >> j1;
	//Matrix m1(i1, j1);
	m1.Set_rowandcol(i1, j1);
	cout << "请输入第一个矩阵m1元素：" << endl;
	m1.SetMatrix();

	cout << "输入第二个矩阵m2的行和列:" << endl;
	cin >> i2 >> j2;
	//Matrix m1(i2, j2);
	m2.Set_rowandcol(i2, j2);
	cout << "请输入第二个矩阵m2元素：" << endl;
	m2.SetMatrix();

	//Matrix m1(i1, j2);

	m3.Set_rowandcol(i1, j2);  //结果矩阵的行是m1的行，列是m2的列

	m3 = m1 + m2;
	cout << "m3=m1+m2:" << endl;
	//m3.ShowMatrix();
	cout << m3 << endl;
	cout << m3[0][1] << endl;
	

	m3 = m1 - m2;
	cout << "m3=m1-m2:" << endl;
	m3.ShowMatrix();
	cout << m3 << endl;

	m3 = m1 * m2;
	cout << "m3=m1*m2:" << endl;
	//m3.ShowMatrix();
	cout << m3 << endl;

	return 0;
}
*/




/*
#include<iostream>
using namespace std;

class Matrix
{                           //矩阵类
private:
	int row, column;        //成员变量行和列
	int max[10][10] = { 0 };         //定义一个最大为10×10的矩阵
	int** array;
public:
	Matrix();				//构造函数初始化矩阵行和列
	Matrix(int r, int c);
	~Matrix();
	Matrix operator+(Matrix& x);		  //声明重载“+”运算符
    Matrix operator-(Matrix& x);		  //声明重载“-”运算符
	Matrix operator*(const Matrix& x);    //声明重载“*”运算符
	Matrix operator=(const Matrix& x);    //声明重载“=”运算符
	friend ostream& operator<<(ostream& cout, Matrix x);//声明重载“<<”运算符
	void Set_rowandcol(int m, int n);         //设置矩阵行和列
	void SetMatrix();					  //设置矩阵元素
	void ShowMatrix();					  //输出矩阵
	int* operator[](int rows)
	{
		return array[rows];
	}
};



ostream& operator<<(ostream& cout, Matrix x)//声明重载“<<”运算符
{
	for (int i = 0; i < x.row; i++)
	{
		for (int j = 0; j < x.column; j++)

			cout << x.max[i][j] << " ";
		cout << endl;
	}
	return cout;
}


Matrix::Matrix()
{						  //构造函数初始化矩阵行和列
	//row = 0;
	//column = 0;
	row = 10; column = 10;
	    for (int i = 0; i < row; i++)
	        {
			for (int j = 0; j < column; j++) 
			{
				max[i][j] = 0;

			}
		}

		array = new int* [row];
		for (int i = 0; i < row; i++) 
		{
			array[i] = new int[column];

		}
}

Matrix::Matrix(int r, int c) :row(r), column(c)
{   //构造函数重载，初始化矩阵元素
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			max[i][j] = 0;
	array = new int* [r];
	for (int i = 0; i < r; i++)
	{
		array[i] = new int[c];
	}
}

Matrix::~Matrix()  //析构函数
{
	if(array!=NULL)
	{ 
		for (int i = 0; i < row; i++)
		{
			delete[] array[i];
		}
		delete[] array;
	}
	
}

Matrix Matrix:: operator+(Matrix& x)
{    //矩阵+运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			temp.max[i][j] = max[i][j] + x.max[i][j];
	}
	return temp;
}

Matrix Matrix::operator-(Matrix& x) 
{    //矩阵-运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < column; j++)
			temp.max[i][j] = max[i][j] - x.max[i][j];
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix& x)
{    //矩阵*运算，双目运算符
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = 0; k < row; k++)
				temp.max[i][j] += max[i][k] * x.max[k][j];
		}
	}
	return temp;
}

Matrix Matrix::operator=(const Matrix& x)
{  //复制运算符=重载，只能重载为成员函数
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			(*this).max[i][j] = x.max[i][j];
	return *this;
}

void Matrix::Set_rowandcol(int m, int n)
{
	row = m;
	column = n;
}

void Matrix::SetMatrix()
{      //设置矩阵元素
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> max[i][j];
		}
	}
}

 void Matrix::ShowMatrix()
{     //输出矩阵
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			cout << max[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int i1, j1, i2, j2;
	Matrix m1, m2, m3;

	cout << "输入第一个矩阵m1的行和列:" << endl;
	cin >> i1 >> j1;
	m1.Set_rowandcol(i1, j1);
	cout << "请输入第一个矩阵m1元素：" << endl;
	m1.SetMatrix();

	cout << "输入第二个矩阵m2的行和列:" << endl;
	cin >> i2 >> j2;
	m2.Set_rowandcol(i2, j2);
	cout << "请输入第二个矩阵m2元素：" << endl;
	m2.SetMatrix();

	m3.Set_rowandcol(i1, j2);  //结果矩阵的行是m1的行，列是m2的列

	m3 = m1 + m2;
	cout << "m3=m1+m2:" << endl;
	m3.ShowMatrix();
	//cout << m3 << endl;
	//cout << m3[0][1] << endl;


	m3 = m1 - m2;
	cout << "m3=m1-m2:" << endl;
	m3.ShowMatrix();
	//cout << m3 << endl;

	m3 = m1 * m2;
	cout << "m3=m1*m2:" << endl;
	m3.ShowMatrix();
	//cout << m3 << endl;



	return 0;
}
*/





/*
#include<iostream>
#include<string.h>
using namespace std;
class  Account		//创建Account类
{
	int  m_zhanghao;  //帐号
	double  m_yuer;  //余额
	double  m_nianlilu;    //年利率
	int  lastDate; //上次变更余额的日期
	double  accumulation;  //余额按日累加之和
	double  accumulate(int date);   //获得到指定日期为止的存款金额按日累积值
public:
	~Account();
	Account(int date, int zhanghao, double nianlilu);  //构造函数
	void  cunkuan(int date, double amount);  //存入现金，date为日期，amount为金额
	void  qukuan(int date, double amount);  //取出现金
	void  jiesuanlixi(int date); //结算利息，每年1月1日调用一次该函数
	void  show();   //输出账户信息
};

double Account::accumulate(int date)
{
	accumulation += m_yuer * (date - lastDate);
	return accumulation;
}
Account::Account(int date, int zhanghao, double nianlilu)
{
	m_zhanghao = zhanghao;
	m_yuer = 0;
	lastDate = date;
	accumulation = 0;
	m_nianlilu = nianlilu;
}
void  Account::cunkuan(int date, double amount) // 存入现金，date为日期，amount为金额
{
	accumulate(date);
	m_yuer += amount;
	lastDate = date;
}
void  Account::qukuan(int date, double amount) //取出现金
{
	accumulate(date);
	if (m_yuer >= amount)
	{
		m_yuer -= amount;
	}
	else
	{
		cout << "余额不足" << endl;
	}
	lastDate = date;
}
//void  Account::jiesuanlixi(int date)   //结算利息，每年1月1日调用一次该函数
//{
//	accumulate(date);
//	if (date == 90 || date / 365 == 0)
//		m_yuer += accumulation / 365 * m_nianlilu;
//	else
//		cout << "未到结算利息时间";
//	cout << "利息:" << accumulation / 365 * m_nianlilu << endl;
//}
void  Account::show()    //输出账户信息
{
	cout << "帐号:" << m_zhanghao << endl;
	cout << "余额:" << m_yuer << endl;
	cout << "利率:" << m_nianlilu << endl;
}

class dingqichuxu : public Account
{
	
};
class huoqichuxu : public Account
{

};
class xinxika : public Account
{

};
class dianzizhanghu : public Account
{
	
};
class daikuanzhanghu : public Account
{

};

int main()
{
	Account s0(1, 123456, 0.017);
	s0.cunkuan(5, 5000);
	s0.cunkuan(45, 5500);
	s0.jiesuanlixi(90);
	s0.show();
}
*/




//#include<iostream>
//#include<string.h>
//using namespace std;
//class  Account
//{
//private:
//	int m_zhanghao;
//	double m_yuer;
//	double m_lilu;
//public:
//	Account()
//	{
//		m_zhanghao =0;
//		m_yuer = 0;
//		m_lilu = 0;
//	}
//	Account(int zhanghao, double yuer, double lilu)
//	{
//		m_zhanghao = zhanghao;
//		m_yuer = yuer;
//		m_lilu = lilu;
//	}
//	void show()
//	{
//		cout << "帐号:" << m_zhanghao << endl;
//		cout << "余额:" << m_yuer << endl;
//		cout << "利率:" << m_lilu << endl;
//	}
//};
//
//
//class dingqichuxu : public Account
//{
//private:
//	int  m_zhanghao;  //帐号
//	double  m_yuer;  //余额
//	double  m_lilu;    //年利率
//	int  lastDate; //上次变更余额的日期
//	double  accumulation;  //余额按日累加之和
//public:
//	double accumulate(int date)
//	{
//		accumulation += m_yuer * (date - lastDate);
//		return accumulation;
//	}
//
//	dingqichuxu(int date, int zhanghao, double lilu)
//	{
//		m_zhanghao = zhanghao;
//		m_yuer = 0;
//		lastDate = date;		
//		accumulation = 0;
//		m_lilu = lilu;
//	}
//	void  cunkuan(int date, double amount) // 存入现金，date为日期，amount为金额
//	{
//		accumulate(date);
//		m_yuer += amount;
//		lastDate = date;
//	}
//	void  qukuan(int date, double amount) //取出现金
//	{
//		accumulate(date);
//		if (m_yuer >= amount)
//		{
//			m_yuer -= amount;
//		}
//		else
//		{
//			cout << "余额不足" << endl;
//		}
//			lastDate = date;
//		}
//	void  jiesuanlixi(int date)   //结算利息
//	{
//		accumulate(date);
//		if (date == 90 || date / 365 == 0)
//		{
//			m_yuer += accumulation / 365 * m_lilu;
//		}
//		else
//		{
//			cout << "未到结算利息时间";
//		}
//		cout << "利息:" << accumulation / 365 * m_lilu << endl;
//	}
//};
//class huoqichuxu : public Account
//{
//private:
//	int  m_zhanghao;  //帐号
//	double  m_yuer;  //余额
//	double  m_lilu;    //年利率
//public:
//	huoqichuxu(int zhanghao,double lilu)
//	{
//		m_zhanghao = zhanghao;
//		m_yuer = 0;
//		m_lilu = lilu;
//	}
//	void  cunkuan(double amount) // 存入现金，date为日期，amount为金额
//	{
//		m_yuer += amount;
//	}
//	void  qukuan(int date, double amount) //取出现金
//	{
//		if (m_yuer >= amount)
//		{
//			m_yuer -= amount;
//		}
//		else
//		{
//			cout << "余额不足" << endl;
//		}
//	}
//	void  jiesuanlixi(int date)   
//	{
//			cout << "利息:" << m_yuer * date * m_lilu << endl;
//	}
//};
//
//class xinxika : public Account
//{
//private:
//	string m_name;
//	int m_zhanghao;
//	double m_yuer;
//public:
//
//	xinxika(string name, int zhanghao, double yuer)
//	{
//		m_name = name;
//		m_zhanghao = zhanghao;
//		m_yuer = yuer;
//	}
//	void show()
//	{
//		cout << "姓名:" << m_name << endl;
//		cout << "帐号:" << m_zhanghao << endl;
//		cout << "余额:" << m_yuer << endl;
//	}
//};
//
//class dianzizhanghu : public Account
//{
//private:
//	int  m_zhanghao;  //帐号
//	double  m_yuer;   //余额
//public:
//
//	dianzizhanghu(int zhanghao)
//	{
//		m_zhanghao = zhanghao;
//		m_yuer = 0;
//	}
//	void  cunkuan(double amount) // 存入现金，date为日期，amount为金额
//	{
//		m_yuer += amount;
//	}
//	void  qukuan(double amount) //取出现金
//	{
//		if (m_yuer >= amount)
//		{
//			m_yuer -= amount;
//		}
//		else
//		{
//			cout << "余额不足" << endl;
//		}
//	}
//	void show()
//	{
//		cout << "帐号:" << m_zhanghao << endl;
//		cout << "余额:" << m_yuer << endl;
//	}
//	
//};
//class daikuanzhanghu : public Account
//{
//private:
//	int  m_zhanghao;  //帐号
//	double  m_jiner;   //余额
//	double  m_lilu;   //年利率
//    double  m_amount;
//	int  m_date;
//public:
//	daikuanzhanghu(int zhanghao,double jiner, double lilu)
//	{
//		m_zhanghao = zhanghao;
//		m_jiner = jiner;
//		m_lilu = lilu;
//	}
//
//	double daikuan(double amount, int date)
//	{
//		m_amount = amount;
//		m_date = date;
//	}
//
//	void show()
//	{
//		cout << "帐号:" << m_zhanghao << endl;
//		cout << "贷款金额:" << m_jiner << endl;
//		cout << "利息:" << m_amount * m_date * m_lilu << endl;
//		cout << "一共应还:" << m_jiner << endl;
//	}
//};
//
//class total : public dingqichuxu, public huoqichuxu, public xinxika, public dianzizhanghu, public daikuanzhanghu
//{
//public:
//	Account p1;
//	total operator + (total& t)
//	{
//		total t1;
//		t1.sum = p1.dingqichuxu::m_yuer + p1.huoqichuxu::m_yuer + p1.xinxika::m_yuer + p1.dianzizhanghu::m_yuer;
//		t1.shouru= p1.dingqichuxu::cunkuan() + p1.huoqichuxu::cunkuan;
//        t1.zhichu= p1.dingqichuxu::qukuan()+ p1.huoqichuxu::qukuan();
//		if (t1.shouru == t1.zhichu)
//		{
//			cout << "收支正常" << endl;
//		}
//		else
//		{
//			cout << "收支异常！！！" << endl;
//		}
//		return t1; 
//	}
//	int sum;
//	int shouru;
//	int zhichu;
//
//};
// int main()
//{
//	 
//	 system("pause")
//}



/*
#include<iostream>
using namespace std;

class Matrix
{
private:
	int row, column;
	int max[10][10] ;
	int** array;
public:
	Matrix();
	Matrix(int r, int c);
	~Matrix();
	Matrix operator+(Matrix& x);		  //声明重载“+”运算符
	Matrix operator-(Matrix& x);		  //声明重载“-”运算符
	Matrix operator*(const Matrix& x);    //声明重载“*”运算符
	Matrix operator=(const Matrix& x);    //声明重载“=”运算符
	friend ostream& operator<<(ostream& cout, Matrix x);//声明重载“<<”运算符
	void Set_rowandcol(int m, int n);
	void SetMatrix();
	void ShowMatrix();
	int* operator[](int rows)
	{
		return array[rows];
	}
};




ostream & operator<<(ostream & cout, Matrix x)
{
	for (int i = 0; i < x.row; i++)
	{
		for (int j = 0; j < x.column; j++)

			cout << x.max[i][j] << " ";
			cout << endl;
	}
	return cout;
}


Matrix::Matrix()
{
	row = 10; column = 10;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			max[i][j] = 0;

		}
	}

	array = new int* [row];
	for (int i = 0; i < row; i++)
	{
		array[i] = new int[column];

	}
}

Matrix::Matrix(int r, int c) :row(r), column(c)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			max[i][j] = 0;
	array = new int* [r];
	for (int i = 0; i < r; i++)
	{
		array[i] = new int[c];
	}
	
}

Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
	{
		delete[] array[i];
	}
	delete[] array;
}

Matrix Matrix:: operator+(Matrix& x)
{
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			temp.max[i][j] = max[i][j] + x.max[i][j];
	}
	return temp;
}

Matrix Matrix::operator-(Matrix& x)
{
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			temp.max[i][j] = max[i][j] - x.max[i][j];
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix& x)
{
	Matrix temp(row, x.column);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = 0; k < row; k++)
				temp.max[i][j] += max[i][k] * x.max[k][j];
		}
		
	}
	return temp;
}

Matrix Matrix::operator=(const Matrix& x)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			(*this).max[i][j] = x.max[i][j];
	return *this;
}

void Matrix::Set_rowandcol(int m, int n)
{
	row = m;
	column = n;
}

void Matrix::SetMatrix()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> max[i][j];
		}
	}
}

int main()
{
	int i1, j1, i2, j2;
	Matrix m1, m2, m3;

	cout << "输入第一个矩阵m1的行和列:" << endl;
	cin >> i1 >> j1;
	m1.Set_rowandcol(i1, j1);
	cout << "请输入第一个矩阵m1元素：" << endl;
	m1.SetMatrix();

	cout << "输入第二个矩阵m2的行和列:" << endl;
	cin >> i2 >> j2;
	m2.Set_rowandcol(i2, j2);
	
		cout << "请输入第二个矩阵m2元素：" << endl;
	m2.SetMatrix();


	m3.Set_rowandcol(i1, j2);
	m3 = m1 + m2;
	cout << "m3=m1+m2:" << endl;
	
	cout << m3 << endl;
	cout << m3[0][1] << endl;


	m3 = m1 - m2;
	cout << "m3=m1-m2:" << endl;
	m3.ShowMatrix();
	cout << m3 << endl;

	m3 = m1 * m2;
	cout << "m3=m1*m2:" << endl;
	
	cout << m3 << endl;
	return 0;
}
*/


