#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>


//�ṹ��

//�����ṹ�� - ֱ���ڽṹ��󴴽�����
//struct
//{
//	char name[20];
//	int age;
//}x;

//struct
//{
//	int a;
//	char b;
//	double c;
//}x;
//struct
//{
//	int a;
//	char b;
//	double c;
//}* p;
//int main()
//{
//	p = &x;
//	//����������������������������ȫ��ͬ���������͡�
//	//�����ǷǷ��ġ�
//	return 0;
//}



//�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;
//};



//�ṹ��ĳ�ʼ��
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 10,20 };
//struct Point p2 = { 20,30 };
//
//struct s
//{
//	int num;
//	char ch;
//	struct Point p;
//	float d;
//};
//
//int main()
//{
//	struct Point p3 = { 40.49 };
//
//	struct s s1 = { 38,'d',{38,58},3.14f };
//	struct s s2 = { .p = {4,5}, .ch = 'o', .num = 49, .d = 3.39f };//�����ʼ��
//
//	printf("%d %c %d %f\n", s1.num, s1.ch, s1.p.x, s1.d);
//	printf("%d %c %d %f\n", s2.num, s2.ch, s2.p.x, s2.d);
//
//	return 0;
//}



//�ṹ���ڴ���� - ����ṹ���С
//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��(VS��Ĭ�ϵ�ֵΪ8)
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//
//	//�жϽṹ���Ա��ƫ����
//	/*printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));*/
//	return 0;
//}



//�޸�Ĭ�϶����� - #pragma pack()
//#pragma pack(2)//����Ĭ�϶�����Ϊ4
//struct A
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()//�ָ�Ĭ�϶�����
//int main()
//{
//	printf("%d", sizeof(struct A));
//	return 0;
//}



//λ��

//λ�ε������ͽṹ�����Ƶģ���������ͬ��
//1.λ�εĳ�Ա������ int��unsigned int ��signed int��
//2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�
//struct A
//{
//	int _a : 2;//��ʾ�ñ���(_a)ֻռ2byte
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d", sizeof(struct A));
//	return 0;
//}

