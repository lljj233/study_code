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


