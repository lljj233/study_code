#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int a = 0;//���ڴ������ĸ��ֽ�
//	int* p = &a;//p��һ����ŵ�ַ�ı�������ַ�ֽ�ָ�룬���԰�p����ָ����������ָ��ı�����
//
//	*p = 20;//�����ò�����������ͨ��p�еĵ�ַ�ҵ�a��*p����a����a=20;
//	printf("%d\n", a);
//
//	printf("%p\n", &a);//ȡ������a��ռ�ĸ��ֽ��е�һ���ֽڵĵ�ַ
//	printf("%p\n", p);
//	return 0;
//}




//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("%c\n", ch);
//	return 0;
//}




//һ��ָ������Ĵ�С
//ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
//32λ�����µĵ�ַ��Ҫ�洢32bitλ����4���ֽ�
//64λ�����µĵ�ַ��Ҫ�洢64bitλ����8���ֽ�

//int main()
//{
//	char* a;
//	int* b;
//	float* c;
//
//
//	//x86���н��Ϊ4
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(c));
//
//
//	//x64���н��Ϊ8
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(b));
//	printf("%zd\n", sizeof(c));
//
//	return 0;
//}