#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS

//���ͣ�auto,const,char,enum,int,short,long,float,double
//     union,struct,sizeof,typedef,signed,unsigned,static,void

//ѭ����break,continue.do,while,for

//��֧��if,else,switch,case,break,default,goto

//������return

//extern:�����ⲿ����

//register:�Ĵ���

//sizeof:�����ڴ��С

//volatile



#include<stdio.h>


//int main()
//{
//	register int a = 10;//���������a��ֵ���ڼĴ�����
//	return 0;
//}


//typedef unsigned int uint;//������unsigned intΪunit
//int maih()
//{
//	unsigned int a;
//	uint b;
//	return 0;
//}



//static ��̬��
//�÷���
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���


//���ξֲ�����
//test()
//{
//	static int a = 0;//��static���1-10����static���10��1��static��a��ջ���Ƶ���̬������������a��ֱ��������������٣�����Ӱ��������
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//static int a = 5;
////ȫ�ֱ��������ⲿ�������ԣ���a�ļ��ж���ı�����b�ļ�����ͨ������ʹ��
////���ȫ�ֱ�����static���Σ�����ⲿ�������Ծͱ���ڲ��������ԣ�ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�ʹ�������С
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}



//���κ���

//int add(int x,int y)
//{
//	return x + y;
//}

//extern int add(int x, int y);

//static int add(int x, int y);
//������������ⲿ�������ԣ���static���κ�����ⲿ�������Ծͱ���ڲ��������ԣ�ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�����Դ�ļ��޷�ʹ�ã�ʹ�������С

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//#define  �������/��

//int MAX(int x,int y)
//{
//	return (x > y ? x : y);
//}

#define add(x,y) ((x)+(y))
#define MAX(x,y) (x>y?x:y)
int main()
{
	int a = 6;
	int b = 9;
	int c = MAX(a, b);
	int d = add(a, b);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}