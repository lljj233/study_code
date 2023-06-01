#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

Date::Date(int year, int month, int day)
{
	if (month > 0 && month < 13 && day>0 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
		cout << "�Ƿ�����" << endl;
}
bool Date::operator<(const Date& x)const
{
	if (_year < x._year)
		return true;
	else if (_year == x._year && _month < x._month)
		return true;
	else if (_year == x._year && _month == x._month && _day < x._day)
		return true;
	return false;
}
bool Date::operator==(const Date& x)const
{
	return _year == x._year
		&& _month == x._month
		&& _day == x._day;
}
bool Date::operator<=(const Date& x)const
{
	return *this < x || *this == x;
}
bool Date::operator>(const Date& x)const
{
	return !(*this <= x);
}
bool Date::operator>=(const Date& x)const
{
	return !(*this < x);
}
bool Date::operator!=(const Date& x)const
{
	return !(*this == x);
}

int Date::GetMonthDay(int year, int month)
{
	static int arr_day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		return 29;
	else
		return arr_day[month];
}
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	/**this = *this + day;*/
	return *this;
}
Date Date::operator+(int day)const
{
	Date tmp(*this);
	tmp += day;
	/*tmp._day += day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		++tmp._month;
		if (tmp._month == 13)
		{
			tmp._year++;
			tmp._month = 1;
		}
	}*/
	return tmp;
}
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			--_year;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
Date Date::operator-(int day)const
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
//����int��������Ϊ�˽��վ����ֵ��������ռλ����ǰ��++��������
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}
int Date::operator-(const Date& d)const
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	
	int n = 0;
	while (min != max)
	{
		min++;
		n++;
	}
	return n * flag;
}
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
	return out;
}
istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}

