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




//λ�ε��ڴ����
//VS2019����֤��λ�ε��ڴ濪�ٺ�ʹ��
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//�ɵ͵���
//	printf("%d", sizeof(s));
//
//	return 0;
//}



//ö��
//ö�ٹ���˼�����һһ�о١�
//�ѿ��ܵ�ȡֵһһ�о١�
//enum Day//����
//{
//	Mon,//0  Ĭ�ϵ���
//	Tues,//1
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun//6
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//��ɫ
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Color s1;
//	int s2;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

////���϶���� enum Day �� enum Sex �� enum Color ����ö�����͡�
////{}�е�������ö�����͵Ŀ���ȡֵ��Ҳ�� ö�ٳ��� ��
////��Щ����ȡֵ������ֵ�ģ�Ĭ�ϴ�0��ʼ��һ�ε���1����Ȼ�ڶ����ʱ��Ҳ���Ը���ֵ��

//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};



//ö�ٵ��ŵ�
//1. ���Ӵ���Ŀɶ��ԺͿ�ά����
//2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3. ��ֹ��������Ⱦ����װ��
//4. ���ڵ���
//5. ʹ�÷��㣬һ�ο��Զ���������



//ö�ٵ�ע������
//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//int main()
//{
//	enum Color a = GREEN;
//	//int a = RED;ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//	printf("%d\n", a);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(enum Color));
//	return 0;
//}



//����(������)
//����Ҳ��һ��������Զ�������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩��
//union UN
//{
//	//c��i����ͬʱʹ��
//	char c;
//	int i;
//};
//int main()
//{
//	union UN un;
//	printf("%d\n", sizeof(un));
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	return 0;
//}



//���ϴ�С�ļ���
//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
//union UN
//{
//	char c[5];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union UN));
//	return 0;
//}



//ͨ�������ж��Ǵ�˴洢����С�˴洢
//int main()
//{
//	int a = 1;//0x 00 00 00 01
//	//��----------------->��
//	//01 00 00 00 - С�˴洢
//	//00 00 00 01 - ��˴洢
//	union UN
//	{
//		char c;
//		int i;
//	}un;
//	un.i = 1;
//	if (un.c == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n ");
//	}
//	return 0;
//}

