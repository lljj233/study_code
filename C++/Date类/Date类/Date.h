#pragma once
#include<iostream>
using namespace std;

class Date
{
	//��Ԫ��������
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

public:
	Date(int year = 1, int month = 1, int day = 1);
	void Print()const//const Date* this��thisָ�벻����ʾ��д��
		             //��Ա������const����ͨ��const���󶼿��Ե��ã�����Ҫ�޸Ķ����Ա�����ĺ������ܼ�
		             //ֻҪ��Ա�����ڲ����޸ĳ�Ա������Ӧ�ü�const��������ͨ��const���󶼿��Ե���
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

	Date& operator++();//ǰ��++
	Date operator++(int);//����++

	Date& operator--();//ǰ��--
	Date operator--(int);//����--

	int operator-(const Date& d)const;

	//�����벻��д�ɳ�Ա��������ΪDate����Ĭ��ռ�õ�һ�������������������ʽ������ʹ��ϰ��
	//void operator<<(ostream& out);                                    d1 << cout;
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

