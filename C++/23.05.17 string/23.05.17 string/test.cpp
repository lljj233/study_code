#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>//�����ַ����飨��ɾ���+�㷨��
using namespace std;

//int main()
//{
//	string s1;
//	std::string s2;
//
//	std::string name("����");
//	name = "����";
//
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2("����");
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
//	s1.push_back(' ');//β��һ���ַ�
//	s1.append("world");//β��һ���ַ���
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
//	//�޸�
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	//����string
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i];
//	}
//	cout << endl;
//
//	char s3[] = "hello world";
//	s3[1];// �ײ�Ϊ*(s3+1)
//	s1[1];// �ײ�Ϊs1.operator[](1)
//
//	return 0;
//}



//������
//iterator����ָ��һ�������ͣ�������ָ��
//int main()
//{
//	string s1 = "hello world";
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//д
//		(*it)--;
//		++it;
//	}
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		//��
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//��Χfor
//	//�ײ��滻Ϊ������
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



//����������
//����������֧�ֵ������������÷�����
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
//	//����������������
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

