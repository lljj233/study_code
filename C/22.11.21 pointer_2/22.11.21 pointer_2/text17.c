#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ָ��
int main()
{
	int a = 10;
	int* pa = &a;       //pa��һ��ָ�����
	int** ppa = &pa;    //ppa�Ƕ���ָ�����  �Դ�����

	printf("%d\n", **ppa);
	**ppa = 20;
	printf("%d\n", a);
	return 0;
}