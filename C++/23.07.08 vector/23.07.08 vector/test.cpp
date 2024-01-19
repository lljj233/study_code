#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void test_vector1()
{
	vector<char> strV;
	//string str;
	// stringҪ�������\0,���ü���c�ӿ�
	// string�кܶ�����ר�ýӿں���

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector2()
{
	vector<string> v;

	string name1("����");
	v.push_back(name1);

	v.push_back(string("����"));

	v.push_back("����");

	//vector<vector<int>> vv;
}

//class A
//{
//	int  _a;
//public:
//	A(int a)
//		:_a(a)
//	{}
//};

/*A a1(1);
A a1 = 1;*/

void test_vector3()
{
	vector<int> v1(10, 1);
	vector<string> v2(10, "***");

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto e : v2)
	{
		cout << e << " ";
	}
	cout << endl;

	// �Լ����͵ĵ�����
	vector<int> v3(v1.begin(), v1.end());
	for (auto e : v3)
	{
		cout << e << " ";
	}
	cout << endl;

	string str("hello world");
	vector<char> v4(str.begin(), str.end());
	for (auto e : v4)
	{
		cout << e << " ";
	}
	cout << endl;

	int a[] = { 16,2,77,29 };
	vector<int> v5(a, a + 4);
	for (auto e : v5)
	{
		cout << e << " ";
	}
	cout << endl;

	// ���� < 
	// less
	sort(v5.begin(), v5.end());
	//sort(v5.rbegin(), v5.rend());
	for (auto e : v5)
	{
		cout << e << " ";
	}
	cout << endl;

	// ���� >
	//greater<int> gt;
	//sort(v5.begin(), v5.end(), gt);

	sort(v5.begin(), v5.end(), greater<int>());
	for (auto e : v5)
	{
		cout << e << " ";
	}
	cout << endl;

	//void(*func)();

	sort(str.begin(), str.end());
	cout << str << endl;

	sort(a, a + 4);
	for (auto e : a)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector4()
{
	vector<int> v1;
	//cout << v1.max_size() << endl;
	//v1.reserve(10);
	v1.resize(10);
	for (size_t i = 0; i < 10; i++)
	{
		v1[i] = i;
	}

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;


	vector<int> v2;
	v2.reserve(10);
	for (size_t i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	for (auto e : v2)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector5()
{
	int a[] = { 16,2,77,29,3,33,43,3,2,3,3,2 };
	vector<int> v1(a, a + sizeof(a) / sizeof(int));
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	// ͷɾ
	v1.erase(v1.begin());
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	// ͷ�� 
	v1.insert(v1.begin(), 100);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	// ɾ����3������
	v1.erase(v1.begin() + 2);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	// 11:41����
	// ɾ��3�����ǲ�֪��3���ĸ�λ�ã���ô�죿
	//vector<int>::iterator pos = find(v1.begin(), v1.end(), 3);
	auto pos = find(v1.begin(), v1.end(), 3);
	/*if (pos != v1.end())
	{
		v1.erase(pos);
	}*/

	// ɾ�����е�3 -- �漰������ʧЧ��������
	while (pos != v1.end())
	{
		v1.erase(pos);
		//pos = find(pos+1, v1.end(), 3);
		pos = find(v1.begin(), v1.end(), 3);
	}

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	v1.assign(10, 1);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
}

void TestVectorExpand()
{
	size_t sz;
	vector<int> v;
	sz = v.capacity();
	cout << "making v grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_vector6()
{
	TestVectorExpand();
}

int main()
{
	test_vector6();

	return 0;
}