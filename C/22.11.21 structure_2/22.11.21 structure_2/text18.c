#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������ÿ����Ա���������Ϳ��Բ�ͬ

//�ṹ�������,����ͳ�ʼ��
//struct student//student�Ǳ�ǩ�������Ը�������ı�
//{
//	//�ṹ���Ա
//	char name[20];//����
//	int age;      //����
//	char sex[10]; //�Ա�
//	float score;  //����
//}s4, s5;                      //s4,s5ҲΪ�ṹ����� - ȫ�ֱ���
//int main()
//{
//	//struct student s1 = { "����",18,"��",95.5f };
//	//printf("%s %d %s %.1f\n", s1.name, s1.age, s1.sex, s1.score);
//	struct student s1, s2, s3;//s1,s2,s3Ϊ�ṹ����� - �ֲ�����
//
//	return 0;
//}



//�ṹ�崫��
//struct S
//{
//	int a;
//	char c;
//};
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//void Print1(struct P sp)
//{
//	//�ṹ�����.��Ա
//	printf("%lf %d %c %f\n", sp.d, sp.s.a, sp.s.c, sp.f);
//}
//void Print2(struct P* p1)
//{
//	//�ṹ��ָ��->��Ա
//	printf("%lf %d %c %f\n", p1->d,p1->s.a,p1->s.c,p1->f);
//}
//int main()
//{
//	struct P p = { 5.5,{100,'f'},3.14f };
//	//printf("%lf %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//
//	Print1(p);  //��ֵ����
//	Print2(&p); //��ַ����
//һ��ѡPrint2������
//ԭ��
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//	return 0;
//}