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


