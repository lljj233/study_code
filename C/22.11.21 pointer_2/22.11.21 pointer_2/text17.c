#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;       //pa��һ��ָ�����
//	int** ppa = &pa;    //ppa�Ƕ���ָ�����  �Դ�����
//
//	printf("%d\n", **ppa);
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//ָ������ - ���ָ�������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//	int* arr[5] = { &a, &b, &c, &d, &e };//arr��ָ������
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	//ʹ�ö��һά����ģ��һ����ά����
//	int a[] = { 1,2,3,4 };
//	int b[] = { 1,3,5,7 };
//	int c[] = { 2,4,6,8 };
//	int* arr[3] = { a,b,c };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}