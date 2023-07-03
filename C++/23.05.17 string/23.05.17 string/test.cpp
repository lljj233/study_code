#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>//管理字符数组（增删查改+算法）
using namespace std;

//int main()
//{
//	string s1;
//	std::string s2;
//
//	std::string name("张三");
//	name = "李四";
//
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2("张三");
//	string s3("hello,world");
//	string s4(10, '*');
//	string s5(s2);
//	string s6(s3, 6, 5);
//	string s7(s3, 6);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//	cout << s7 << endl;
//
//	cout << (s1 == s2) << endl;
//	cout << (s1 < s2) << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1 = "hello";
//	s1.push_back(' ');//尾插一个字符
//	s1.append("world");//尾插一个字符串
//	cout << s1 << endl;
//
//	string s2 = "hello";
//	s2 += ' ';
//	s2 += "world";
//	cout << s2 << endl;
//
//	return 0;
//}



//int main()
//{
//	string s1 = "hello world";
//	cout << s1.size() << endl;
//	//修改
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	//遍历string
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i];
//	}
//	cout << endl;
//
//	char s3[] = "hello world";
//	s3[1];// 底层为*(s3+1)
//	s1[1];// 底层为s1.operator[](1)
//
//	return 0;
//}



//迭代器
//iterator是像指针一样的类型，可能是指针
//int main()
//{
//	string s1 = "hello world";
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//写
//		(*it)--;
//		++it;
//	}
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		//读
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//范围for
//	//底层替换为迭代器
//	for (auto& ch : s1)
//	{
//		ch++;
//	}
//	for (auto ch : s1)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	return 0;
//}



//容器和链表
//容器和链表都支持迭代器，并且用法类似
//#include<vector>
//#include<list>
//int main()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//
//	list<int>l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//
//	list<int>::iterator itit = l.begin();
//	while (itit != l.end())
//	{
//		cout << *itit << " ";
//		++itit;
//	}
//	cout << endl;
//
//	//迭代器与容器相结合
//	reverse(v.begin(), v.end());
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	reverse(l.begin(), l.end());
//
//	return 0;
//}

