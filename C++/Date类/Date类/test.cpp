#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void DateTest1()
{
	Date d1(2023, 5, 1);
	Date d2(2023, 6, 1);
	d1 += 100;
	d1.Print();
	Date d3(d2 + 100);
	d2.Print();
	d3.Print();
}

void DateTest2()
{
	Date d1(2023, 5, 1);
	d1++;//d1.operator(1)
	++d1;//d1.operator()
}

void DateTest3()
{
	Date d1(2023, 6, 1);
	d1 -= 50;
	d1.Print();
	Date d2(2023, 5, 11);
	Date d3 = d2 - 100;
	d2.Print();
	d3.Print();
}

void DateTest4()
{
	Date d1(2023, 5, 11);
	d1 += -100;
	d1.Print();
	Date d2(2023, 5, 11);
	d2 -= -100;
	d2.Print();
}

void DateTest5()
{
	Date d1(2023, 5, 11);
	--d1;//d1.operator--(&d1,int);
	d1.Print();
	d1--;//d1.operator--(&d1);
	d1.Print();
}

void DateTest6()
{
	Date d1(2023, 5, 11);
	Date d2(2000, 5, 11);
	cout << d1 - d2 << endl;
	cout << d2 - d1 << endl;
}

void DateTest7()
{
	Date d1(2023, 5, 11);
	cout << d1;//operator<<(cout,d1);

	Date d2(2003, 3, 8);
	Date d3(2034, 4, 5);
	cout << d1 << d2 << d3;

	cin >> d1 >> d2;
	cout << d1 << d2;

	Date d4(2023, 13, 1);
	cout << d3;
}

void DateTest8()
{
	Date d1(2023, 5, 11);
	const Date d2(2003, 3, 8);
	d1.Print();
	d2.Print();//没有用const修饰print的*this之前，权限放大
}

int main()
{
	//DateTest1();
	//DateTest2();
	//DateTest3();
	//DateTest4();
	//DateTest5();
	//DateTest6();
	//DateTest7();
	DateTest8();
	return 0;
}

