#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	const char* p = "abcdef";
//	printf("%s\n", p);
//	
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//
//	const char* str3 = "hello";
//	const char* str4 = "hello";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3==str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3and str4 are not same\n");
//
//	return 0;
//}



//ָ������ - ���ָ�������
//int main()
//{
//	//����ַ�ָ�������
//	const char* arr[4] = { "abcd","dsa","isis","sdisd" };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int arr3[5] = { 1,3,5,7,9 };
//	int arr4[5] = { 0,0,0,0,0 };
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(arr[i]+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ָ�� - ��������ַ��ָ�� - ָ�������ָ��
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* pc = &ch;
//
//	//����ָ��
//	int num = 10;
//	int* pn = &num;
//
//	int arr[10];
//	int(*pa)[10] = &arr;
//	//pa����һ������ָ��
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  //&arrȡ����������ĵ�ַ��ֻ������ĵ�ַ����Ҫ����������
//	int(*p)[10] = &arr;
//
//	//������ - ������Ԫ�صĵ�ַ
//	//&������ - ����ĵ�ַ
//	//������Ԫ�صĵ�ַ������ĵ�ַ��ֵ�ĽǶ�������һ���ģ��������岻һ��
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//+4
//
//	printf("%p\n", &arr[0]);6
//	printf("%p\n", &arr[0] + 1);//+4
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//+40
//	return 0;
//}



//��ͬ������ӡ��ά����
//void print1(int arr[3][4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{			
//			//printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
// 
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {2,3,4,5} , {3,4,5,6} };
//	//print1(arr, 3, 4);
//	print2(arr, 3, 4);
//	return 0;
//}



//һά���鴫��
//#include <stdio.h>
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
////�������ζ��ǿ��е�
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}



//��ά���鴫��
//void test(int arr[3][5])
//{}
///*void test(int arr[][])//�����в���ʡ��
//{}*/
//void test(int arr[][5])
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
///*void test(int* arr)//����
//{}*/
///*void test(int* arr[5])//����
//{}*/
//void test(int(*arr)[5])
//{}
///*void test(int** arr)//����
//{}*/
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}



//һ��ָ�봫��
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}