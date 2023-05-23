#define _CRT_SECURE_NO_WARNINGS 1

//类的6个默认成员函数

//1.构造函数
//构造函数是一个特殊的成员函数，名字与类名相同,创建类类型对象时由编译器自动调用，
//以保证每个数据成员都有 一个合适的初始值，并且在对象整个生命周期内只调用一次.
//构造函数是特殊的成员函数，构造函数虽然名称叫构造，但是构造函数的主要任务并不是开空间创建对象，而是初始化对象
//特征：
//1. 函数名与类名相同。
//2. 无返回值。
//3. 对象实例化时编译器自动调用对应的构造函数。
//4. 构造函数可以重载。
//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate()
//{
//	Date d1; // 调用无参构造函数
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();// warning C4930: “Date d3(void)”: 未调用原型函数(是否是有意用变量定义的?)
//}
//int main()
//{
//	// 将Date类中构造函数屏蔽后，代码可以通过编译，因为编译器生成了一个无参的默认构造函数
//	// 将Date类中构造函数放开，代码编译失败，因为一旦显式定义任何构造函数，编译器将不再生成
//	// 无参构造函数，放开后报错：error C2512: “Date”: 没有合适的默认构造函数可用
//	Date d1;
//	return 0;
//}

//如果类中没有显式定义构造函数，则C++编译器会自动生成一个无参的默认构造函数，
//1.对于内置类型成员（int、double）等不做处理（a.有些编译器会处理 b.C++11声明可以给缺省值，给了缺省值会用缺省值进行初始化）
//2. 对于自定义类型成员，则调用它的默认构造
//一旦用户显式定义编译器将不再生成。

//一般情况下，构造函数都需要自己写
//其他情况：
//1.内置类型成员都有缺省值，且符合初始化需求
//2.全是自定义类型的构造，并且这些类型都定义默认构造



//2.析构函数
//与构造函数功能相反，析构函数不是完成对对象本身的销毁，局部对象销毁工作是由编译器完成的。
//而对象在销毁时会自动调用析构函数，完成对象中资源的清理工作。
//特征：
//1. 析构函数名是在类名前加上字符 ~。
//2. 无参数无返回值类型。
//3. 一个类只能有一个析构函数。若未显式定义，系统会自动生成默认的析构函数。注意：析构函数不能重载
//a.对于内置类型成员不做处理
//b.对于自定义类型成员会去调用它的析构函数
//4. 对象生命周期结束时，C++编译系统系统自动调用析构函数
//5.编译器生成的默认析构函数，对自定类型成员调用它的析构函数。

//一般情况下，有动态资源申请，就需要显示写析构函数释放资源，例如栈类
//没有动态申请的资源，不需要写析构，例如日期类
//需要释放资源的成员都是自定义类型不需要写析构



//3.拷贝构造函数
//拷贝构造函数是特殊的成员函数
//特征：
//1. 拷贝构造函数是构造函数的一个重载形式。
//2. 拷贝构造函数的参数只有一个且必须是类类型对象的引用，使用传值方式编译器直接报错，因为会引发无穷递归调用。
//3. 若未显式定义，编译器会生成默认的拷贝构造函数。 默认的拷贝构造函数对象按内存存储按字节序完成拷贝
//   这种拷贝叫做浅拷贝，或者值拷贝。
//	 a.内置类型成员完成值拷贝/浅拷贝
//	 b.自定义类型成员会调用它的拷贝构造
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	return 0;
//}


//函数运算符重载
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	bool operator<(const Date& x)
//	{
//		if (_year < x._year)
//			return true;
//		else if (_year == x._year && _month < x._month)
//			return true;
//		else if (_year == x._year && _month == x._month && _day < x._day)
//			return true;
//		return false;
//	}
//	Date operator=(const Date& x)
//	{
//		_year = x._year;
//		_month = x._month;
//		_day = x._day;
//		return *this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
////bool operator<(const Date& x1, const Date& x2)
////{
////	if (x1._year < x2._year)
////		return true;
////	else if (x1._year == x2._year && x1._month < x2._month)
////		return true;
////	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
////		return true;
////	return false;
////}
//int main()
//{
//	Date d1(2003, 7, 3);
//	Date d2(2023, 5, 1);
//	d1 < d2;//会转换成d1.operator<(d2);
//	return 0;
//}
//注意：
//1. 不能通过连接其他符号来创建新的操作符：比如operator@
//2. 重载操作符必须有一个类类型参数
//3. 用于内置类型的运算符，其含义不能改变，例如：内置的整型 + ，不 能改变其含义
//4. 作为类成员函数重载时，其形参看起来比操作数数目少1，因为成员函数的第一个参数为隐藏的this
//5. .* :: sizeof ? : .注意以上5个运算符不能重载。这个经常在笔试选择题中出现。

