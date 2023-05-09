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

