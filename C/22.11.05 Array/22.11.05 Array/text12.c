#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int arr1[5 + 6] = {0};
//	int arr2[5] = {0};
//
//	//int n = 10;
//	//int arr3[n];//VS�ı�����IDE��֧��C99�еı䳤���飬C99��׼֧���˱䳤����ĸ�����ǲ��ܳ�ʼ��
//
//
//	return 0;
//}


//#include<stdio.h>
//int arr[10];//ȫ������Ĭ�ϳ�ʼ��Ϊ0
//int main()
//{
//	//��ʼ��ָ������ͬʱ������һЩֵ
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//	//int arr2[10] = { 1,2,3 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };//����û��ָ������Ԫ�ظ������������ݳ�ʼ����������ȷ�������Ԫ�ظ���
//
//	//arr4��arr5��һ��
//	//int arr4[] = { 1,2,3 };//3��Ԫ��
//	//int arr5[10] = { 1,2,3 };//10��Ԫ��
//
//	//char arr6[3] = { 'a', 'b', 'c' };
//	//char arr7[] = { 'a', 'b', 'c' };//3��Ԫ��
//
//	//char arr8[10] = "abc";//10��Ԫ��
//	//char arr9[] = "abc";//4��Ԫ��
//
//	char arr8[] = "abc";
//	char arr9[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr8);
//	printf("%s\n", arr9);
//
//	return 0;
//}


//һά����
//1. ���������±�ģ��±��Ǵ�0��ʼ��
//2. [] �±���ʲ�����

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//����˳���ӡ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//�����ӡ
//	for (i = sz-1; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	//���Ŵ�ӡ
//	for (i = 0; i<sz; i+=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//һά����Ĵ洢
//1.һά�������ڴ�����������ŵ�
//2.���������±������������ĵ�ַ�ɵ͵��߱仯

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}



//��ά����Ĵ����ͳ�ʼ��

//#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int arr2[3][4] = { 1,2,3,4,5};
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//	//��ά��������ǿ���ʡ�Եģ������в���ʡ��
//	int arr4[][2] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//��ά����Ĵ洢
//��ά�������ڴ�����������ŵ�
// ��ά����Ҳ��һά���������

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)            //for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)        //for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	printf("\n");
//	
//	
//	int*p = &arr[0][0];
//	int k = 0;
//	for (k = 0; k < 12; k++)
//	{
//		printf("%d ", *(p + k));
//	}
//
//	return 0;
//}


