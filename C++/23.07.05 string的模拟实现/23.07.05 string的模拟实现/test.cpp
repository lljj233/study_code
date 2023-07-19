#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"string.h"

void test_string1()
{
	bit::string s1("hello world");
	cout << s1.c_str() << endl;
	for (size_t i = 0; i < s1.size(); i++)//Ð´
	{
		s1[i]++;
	}

	for (size_t i = 0; i < s1.size(); i++)//¶Á
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	bit::string s2;
	cout << s2.c_str() << endl;

	const bit::string s3("hello world");
	cout << s3.c_str() << endl;

	auto cit = s3.begin();
	while (cit != s3.end())
	{
		//*cit+=1;
		cout << *cit;
		cit++;
	}
	cout << endl;

	bit::string::iterator it = s1.begin();
	while (it != s1.end())
	{
		it += 1;
		cout << *it;
		it++;
	}
	cout << endl;

	for (auto ch : s1)
	{
		cout << ch;
	}
	cout << endl;
}

void test_string2()
{
	bit::string s1("hello world");
	cout << s1.c_str() << endl;
	s1.push_back(' ');
	s1.push_back('*');
	s1.push_back('*');
	s1.append("---------");
	cout << s1.c_str() << endl;

	bit::string s2("hello world");
	cout << s2.c_str() << endl;
	s2 += ' ';
	s2 += '*';
	s2 += '*';
	s2 += "--------";
	cout << s2.c_str() << endl;
}

void test_string3()
{
	bit::string s1("hello world");
	cout << s1.c_str() << endl;
	s1.insert(5, 3, '*');
	cout << s1.c_str() << endl;
	s1.insert(0, 2, '*');
	cout << s1.c_str() << endl;

	bit::string s2("hello world");
	cout << s2.c_str() << endl;
	s2.insert(5, "xxx");
	s2.insert(0, "xxx");
	cout << s2.c_str() << endl;
}

void test_string4()
{
	bit::string s1("hello world");
	cout << s1.c_str() << endl;
	s1.erase(6, 2);
	cout << s1.c_str() << endl;
	s1.erase(0, 2);
	cout << s1.c_str() << endl;
	s1.erase(5);
	cout << s1.c_str() << endl;
	s1.erase(2, 12);
	cout << s1.c_str() << endl;
}

void test_string5()
{
	bit::string s1("hello world");
	cout << s1.c_str() << endl;
	int result1 = s1.find("hello");
	cout << result1 << endl;
	int result2 = s1.find("or");
	cout << result2 << endl;
	int result3 = s1.find("abc");
	cout << result3 << endl;
}

void test_string6()
{
	bit::string s1("hello world");
	cout << s1.c_str() << endl;
	s1.resize(8);
	cout << s1.c_str() << endl;
	s1.resize(12, 'x');
	cout << s1.c_str() << endl;
	s1.resize(20, 'y');
	cout << s1.c_str() << endl;
}

void test_string7()
{
	bit::string s1("hello world");
	s1 += '\0';
	s1 += "?????";
	cout << s1 << endl;
	cout << s1.c_str() << endl;

	bit::string s2(s1);
	cout << s1 << endl;
	cout << s2 << endl;
	s1 += "xxxxxxxxxxxxxxxxxxx";
	cout << s1 << endl;
}

void test_string8()
{
	bit::string s1;
	cin >> s1;
	cout << s1 << endl;

	cin >> s1;
	cout << s1 << endl;
}

void test_string9()
{
	bit::string s1("aaa");
	bit::string s2("aaaxxx");
	cout << (s1 < s2) << endl;
	cout << (s1 > s2) << endl;
	cout << (s1 == s2) << endl;

	bit::string s3("aaa");
	bit::string s4("aaa");
	cout << (s3 < s4) << endl;
	cout << (s3 > s4) << endl;
	cout << (s3 == s4) << endl;

	bit::string s5("aaaxxx");
	bit::string s6("aaa");
	cout << (s5 < s6) << endl;
	cout << (s5 > s6) << endl;
	cout << (s5 == s6) << endl;
}

void test_string10()
{
	bit::string s1("hello");
	bit::string s2(s1);
	cout << s1 << endl;
	cout << s2 << endl;

	bit::string s3 = "xxxxxxxx";
	s1 = s3;
	cout << s1 << endl;
	cout << s3 << endl;

	s3 += '\0';
	s3 += "aaaaaaaaaaa";
	cout << s3 << endl;

	bit::string s4(s3);
	cout << s4 << endl;
}

int main()
{
	test_string10();
	return 0;
}

