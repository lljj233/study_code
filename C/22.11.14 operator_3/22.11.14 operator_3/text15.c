#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�����Լ�

//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ú�++
//	//�൱��int b = a;a = a + 1;
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	int c = 10;
//	int d = ++c;//ǰ��++����++��ʹ��
//	//�൱��a = a + 1;b = a;
//	printf("%d\n", c);//11
//	printf("%d\n", d);//11
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//
//	int b = 10;
//	printf("%d\n", ++b);//11
//	printf("%d\n", b);//11
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//	int b = 10;
//	printf("%d\n", --b);//9
//	printf("%d\n", b);//9
//	return 0;
//}

// ++ -- ���и����õ�(�ı�����)
//int main()
//{
//	int a = 10;
//	int b = ++a;//a=11 b=11
//
//	int a = 10;
//	int b = a + 1;//a=10 b=11
//	return 0;
//}


//ǿ������ת��
//int main()
//{
//	int a = (int)3.14;//��������
//	printf("%d", a);
//	return 0;
//}

//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int x = rand();
//	printf("%d", x);
//	return 0;
//}


//sizeof������
//void test1(int arr[])//���鴫�Σ��βο���д��ָ��
//{
//	printf("%zd\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(ch));//10
//
//	//x64��������8��x86��������4
//	test1(arr);//4
//	test2(ch);//4
//	return 0;
//}



//�߼�������
//�߼��� && (����)  һ��Ϊ����Ϊ�٣�������Ϊ���Ϊ��
//�߼��� || (����)  һ��Ϊ����Ϊ�棬������Ϊ�ٲ�Ϊ�� 
//ע������ ��λ��& �� ��λ��|
//int main()
//{
//	int x = 1;
//	int y = 0;
//	if (x && y)
//	{
//		printf("&&\n");
//	}
//	if (x || y)
//	{
//		printf("||\n");
//	}
//	return 0;
//}

//�ж�����
//int main()
//{
//	int y = 2331;
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		printf("%d������\n", y);
//	}
//	else
//	{
//		printf("%d��������\n", y);
//	}
//	return 0;
//}

//�߼��������Ķ�·ЧӦ
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//  //i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//���ű��ʽ
//����������ִ��,�������ʽ�Ľ�������һ�����ʽ�Ľ��
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//}

//if (a = b + 1, c = 1 / 2, d > 0)


//����һ���ṹ��ĳ�Ա
//��������->�Զ�������->�ṹ�壬ö�٣�������
//typedef struct students
//{
//	char name[20];
//	int num;
//	int age;
//}STU;
//void print(STU* p)
//{
//	printf("%s %d %d\n", (*p).name, (*p).num, (*p).age);
//	printf("%s %d %d\n", p->name, p->num, p->age);
//}
//int main()
//{
//	STU p1 = { "����",11,18 };
//	printf("%s %d %d\n", p1.name, p1.num, p1.age);
//	print(&p1);
//	return 0;
//}


//c��������������������������ȱʡ�������͵ľ�����ʵ�ֵ�
//Ϊ�˻��������ȣ����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ����
//����ת����Ϊ��������,���������ǰ��ձ������������͵ķ���λ��������
//int main()
//{
//	char a = 3;
//	// �ضϣ�4���ֽڵ����ݷ���1���ֽ���
//	// 00000000 00000000 00000000 00000011 - 3�Ķ���������
//	// 00000011 - a
//
//	char b = 127;
//	// 00000000 00000000 00000000 01111111
//	// 01111111 - b
//
//	char c = a + b;
//	// 00000011 + 01111111
//	// ��������
//	// 00000000 00000000 00000000 00000011 +
//	// 00000000 00000000 00000000 01111111
//	// 00000000 00000000 00000000 10000010
//	// 10000010 - c
//
//	printf("%d", c);
//	// %d�Ǵ�ӡʮ������
//	// 11111111 11111111 11111111 10000010 - ����
//	// 11111111 11111111 11111111 10000001
//	// 10000000 00000000 00000000 01111110 - ��Ӧ��ԭ��
//	// -126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));   //1
//	printf("%u\n", sizeof(+c));  //4
//	printf("%u\n", sizeof(-c));  //4
//	return 0;
//}



//����ת��(��������)
//���ĳ������������������������б��������ϵ�
//��ô����Ҫת��Ϊ����һ�������������ͺ�ִ������
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int