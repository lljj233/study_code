#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//�Զ��庯�������ַ�������

//����
//int my_strlen1(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////�ݹ�
//int my_strlen2(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	if (*str != '\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	else
//		return 0;
//}
////ָ��-ָ��
//int my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen3(arr);
//	printf("%d", len);
//	return 0;
//}



//strlen�����ַ������ȵģ�����ĳ��Ȳ�����Ϊ���������Է�������Ϊsize_t,���޷��ŵ�����
//typedef unsigned int size_t;
//size_t strlen(const char* string);

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<=n");
//	return 0;
//}



//strcpy - �����ַ�������
//Դ�ַ��������� '\0' ����
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ�
//int main()
//{
//	char arr1[20] = { "xxxxxxxxx" };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//��arr2�ŵ�arr1
//
//	//char* p = "sdhisidjs";//�����ַ���
//	//strcpy(p, arr2);//�����ַ������ܱ��޸�
//	return 0;
//}