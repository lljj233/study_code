#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//int a = 0;
//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//
//	// ;; -- �������޶���
//	printf("%d\n", ::a);//�հ״���ȫ����
//	return 0;
//}




//int a = 0;
//namespace A//�����ռ���Զ������������������
//{
//	int a = 1;
//}//�˴�û�зֺ�
//
////�ֲ���->ȫ����->չ�������ռ� ���� ָ�����ʿռ���
//
////չ�������ռ���
//using namespace A;
//int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", A::a);//ָ�����ʿռ���
//	return 0;
//}
//
//


//namespace A
//{
//	int rand = 1;
//}
//
//int main()
//{
//	printf("%d\n", A::rand);
//	printf("%p\n", rand);//����ͷ�ļ��е�rand
//	return 0;
//}




//�����ռ����Ƕ��
//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}



//�����ռ��ʹ�������ַ�ʽ��
//namespace N
//{
//	int a = 0;
//	int b = 0;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//
////1.�������ռ����Ƽ��������޶���
//int main()
//{
//	printf("%d\n", N::a);
//	return 0;
//}
//
//
////2.ʹ��using�������ռ���ĳ����Ա����
//using N::b;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	return 0;
//}
//
//
////3.ʹ��using namespace �����ռ���������
//using namespace N;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}



//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main()
//{
//	int x = 0;
//	double y = 3.14;
//
//	//�����������
//	cout << "abc" << endl;
//	cout << "abc" << "def" << endl;
//	cout << "abc" << "def" << x << endl;
//	cout << y << endl;//�Զ�ʶ������
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	double y = 0;
//
//	//����ȡ�����
//	cin >> x >> y;
//	cout << x << " " << y << endl;//y�ľ��ȶ�ʧ
//	return 0;
//}



//ȱʡ����

//#include<iostream>
//using namespace std;

//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func();    //û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	Func(10);  //����ʱ��ʹ��ָ����ʵ��
//	return 0;
//}

//ȫȱʡ����(���еĲ���������ȱʡֵ)
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func();
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//
//	return 0;
//}

//��ȱʡ����(���ֵĲ���������ȱʡֵ)
//��������ȱʡ
//void Func(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//Func();  //error
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}

//ע�⣺
//1. ��ȱʡ������������������������������ܼ���Ÿ�
//2. ȱʡ���������ں��������Ͷ�����ͬʱ����(�����������岻��)
//3. ȱʡֵ�����ǳ�������ȫ�ֱ���
//4. C���Բ�֧�֣���������֧�֣�



//��������
//�Ǻ�����һ�����������C++������ͬһ�����������������������Ƶ�ͬ������,
//��Щͬ���������β��б�(�������� �� ���� �� ����˳��)��ͬ������������ʵ�ֹ��������������Ͳ�ͬ�����⡣
//�Է���ֵû��Ҫ��

//#include<iostream>
//using namespace std;
//
//// 1���������Ͳ�ͬ
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//
//// 2������������ͬ
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
// cout << "f(int a)" << endl;
//}
//
//
//// 3����������˳��ͬ
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//int main()
//{
//	Add(10, 20);
//	Add(10.1, 20.2);
//	f();
//	f(10);
//	f(10, 'a');
//	f('a', 10);
//	return 0;
//}

//�޲ε��ÿ��ܴ�������



//����
//���ò����¶���һ�����������Ǹ��Ѵ��ڱ���ȡ��һ������������������Ϊ���ñ��������ڴ�ռ䣬���������õı�������ͬһ���ڴ�ռ䡣
//�﷨������& ���ñ�����(������) = ����ʵ�壻���������ͱ��������ʵ����ͬ�����͵ģ�
//#include<iostream>
//using namespace std;

//int main()
//{
//	//a,b,c,d����ͬһ��ռ�
//	int a = 0;
//	int& b = a;
//	int& c = b;
//	int& d = a;
//
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//
//	b++;
//	d++;
//
//	int x = 1;
//	d = x;//������x��ֵ��d,C++�����ò��ı�ָ��
//
//	return 0;
//}


//ע�⣺
//1. �����ڶ���ʱ�����ʼ��
//2. һ�����������ж������
//3. ����һ������һ��ʵ�壬�ٲ�����������ʵ��



//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 1, y = 0;
//	swap(x, y);
//	cout << x << endl;
//	cout << y << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//void swap(int*& a, int*& b)
//{
//	int* tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 1, y = 0;
//	int* px = &x, * py = &y;
//	cout << px << endl;
//	cout << py << endl;
//	swap(px, py);
//	cout << px << endl;
//	cout << py << endl;
//	return 0;
//}




//��ֵ��������Ч�ʱȽ�
//��ֵ��Ϊ�������߷���ֵ���ͣ��ڴ��κͷ����ڼ䣬��������ֱ�Ӵ���ʵ�λ��߽���������ֱ
//�ӷ��أ����Ǵ���ʵ�λ��߷��ر�����һ����ʱ�Ŀ����������ֵ��Ϊ�������߷���ֵ���ͣ�Ч
//���Ƿǳ����µģ������ǵ��������߷���ֵ���ͷǳ���ʱ��Ч�ʾ͸��͡�

//#include <time.h>
//#include<iostream>
//using namespace std;
//
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}



//������
//#include<iostream>
//using namespace std;

//int main()
//{
//	const int a = 0;
//	//int& b = a; ����a���ܸı䣬���õ�Ȩ�޲��ܷŴ�
//
//	const int c = 0;
//	int d = c;//c������d��d��Ӱ��a
//
//	int x = 0;
//	int& y = x;
//	const int& z = x;//��ȷ�����ù�����Ȩ�޿���ƽ�ƻ���С
//	++x;//��ȷ����Ϊx��yʱ�����޸�
//	//++z; ������Ϊzʱ�����޸�
//	cout << z << endl;
//
//	const int& m = 10;//��ȷ���൱��Ϊ����������
//
//	double dd = 1.11;
//	int ii = dd;
//	//��������ת��ʱ�����������ʱ��������ʱ�������г���
//	//int& rii = dd; ����
//	const int& rii = dd;//��ȷ
//
//	return 0;
//}

//��ʱ�������г��Ե�����
//int func1()
//{
//	static int x = 0;
//	return x;
//}
//int& func2()
//{
//	static int x = 0;
//	return x;
//}
//int main()
//{
//	//int& ret1 = func1(); ����Ȩ�޷Ŵ�
//	//int ret = func1();//��ȷ������
//	const int& ret1 = func1();//��ȷ��Ȩ��ƽ��
//
//	int& ret2 = func2();//��ȷ��Ȩ��ƽ��
//	const int& ret3 = func2();//��ȷ��Ȩ����С
//
//	return 0;
//}




//����������ֵ
//����ʱ��������ʱ���������ٿ��������Ч�ʣ�
//ʹ�ó���
//1.�ܶೡ��������ʹ�����ô���
//2.����������������ֵ����������������������˾Ͳ��������÷���

//1.��ֵ����
//int Count1()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}
////2.�����÷���
//
////����
////int& Count3()
////{
////	int n = 0;
////	n++;
////	// ...
////	return n;
////}
//
////��ȷ��
//int& Count2()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;//����n�ı���(����)
//}
//int main()
//{
//	int ret1 = Count1();
//	int ret2 = Count2();
//	return 0;
//}

