#define _CRT_SECURE_NO_WARNINGS 1

//������Ϊ��������
#include<stdio.h>
//���򷽷���ð������ѡ�����򣬲������򣬿�������
//ð�������������ڵ������бȽϣ���ʱҪ���н�������

//void Sort(int arr[],int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);  sizeof(arr)��һ����ַ����x86��Ϊ4���ֽ�
//	//����arr����������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð�����򣬾�����һ��������еıȽϴ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,4,6,7,1,0,5,9,8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//дһ�������������������
//	Sort(arr,sz);
//	int i  = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//������һ����������Ԫ�صĵ�ַ,�����������
//1.sizeof�������������������������ʾ�������飬�����������������ֽڴ�С
//2.&���������������������ʾ��������,&������ȡ����������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


