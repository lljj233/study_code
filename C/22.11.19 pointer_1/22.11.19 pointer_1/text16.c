#define _CRT_SECURE_NO_WARNINGS 1

//ָ��
//1.ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
//2.ƽʱ��ָ��ָ����ָ���������������ڴ��ַ

#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;//ȡa�ĵ�ַ
//	//intռ�ĸ��ֽڣ�ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}
//��Ȼ��ͬ���͵�ָ���ֽڶ�һ�������������������
//1.ָ�����;����ˣ�ָ����н����ò�����ʱ��һ���Է��ʼ����ֽ�
//�����char*��ָ�룬�����÷���1���ֽ�
//�����char*��ָ�룬�����÷���2���ֽ�
//�����int*��ָ�룬�����÷���4���ֽ�
//�����float*��ָ�룬�����÷���4���ֽ�
//�����double*��ָ�룬�����÷���8���ֽ�


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//int* ��1���Ǽ�4���ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//char* ��1���Ǽ�1���ֽ�
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pc = 1;
//		pc++;
//	}
//}
//ָ�����;���ָ��Ĳ�����ָ��+1���������ֽڣ�
//�ַ�ָ��+1������1���ֽ�
//����ָ��+1������4���ֽ�



//Ұָ��:
//Ұָ�����ָ��ָ���λ���ǲ���֪��

//����
//1.ָ��δ��ʼ��
//int main()
//{
//	int* p;//p�Ǿֲ�������û�г�ʼ��ʱ�����ֵ
//	*p = 2;//Ұָ��
//	return 0;
//}

//2.ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 11; i++)//Խ��
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//3.ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	/*printf("abc\n");*/
//	printf("%d\n", *p);
//	return 0;
//}


//����Ұָ�룺
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷţ���ʱ��NULL
//4.���ⷵ�ؾֲ������ĵ�ַ
//5.ָ��ʹ��֮ǰ�����Ч��



//ָ�������
//1.ָ��Ӽ�����
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for(vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//2.ָ���ȥָ�루ǰ��������ָ��Ҫָ��ͬһ��ռ䣩
//ָ���ָ�룬�õ���������ָ��֮��Ԫ�صĸ����ľ���ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}

//int get_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int len = get_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//3.ָ��Ĺ�ϵ����
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for(vp = &values[N_VALUES]; vp > &values[N_VALUES];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}