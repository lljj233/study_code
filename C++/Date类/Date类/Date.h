#pragma once
#include<iostream>
using namespace std;

class Date
{
	//友元函数声明
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

public:
	Date(int year = 1, int month = 1, int day = 1);
	void Print()const//const Date* this（this指针不能显示地写）
		             //成员函数加const后，普通和const对象都可以调用，但是要修改对象成员变量的函数不能加
		             //只要成员函数内部不修改成员变量都应该加const，这样普通和const对象都可以调用
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	bool operator<(const Date& x)const;
	bool operator==(const Date& x)const;
	bool operator<=(const Date& x)const;
	bool operator>(const Date& x)const;
	bool operator>=(const Date& x)const;
	bool operator!=(const Date& x)const;

	int GetMonthDay(int year, int month);
	Date& operator+=(int day);
	Date operator+(int day)const;

	Date& operator-=(int day);
	Date operator-(int day)const;

	Date& operator++();//前置++
	Date operator++(int);//后置++

	Date& operator--();//前置--
	Date operator--(int);//后置--

	int operator-(const Date& d)const;

	//流插入不能写成成员函数，因为Date对象默认占用第一个参数作左操作数，格式不符合使用习惯
	//void operator<<(ostream& out);                                    d1 << cout;
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

