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

//ģ��ʵ��strcpy����
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);//��arr2�ŵ�arr1
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat - ��һ���ַ���������ַ���
//Դ�ַ��������� '\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.��Ŀ��ռ�ĩβ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��
// 	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcmp - �Ƚ������ַ����Ĵ�С
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//int main()
//{
//	char arr1[] = "abadef";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//ģ��ʵ��strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abuisd";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}



//strncpy
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
//char* strncpy(char* destination, const char* source, size_t num);
//int main()
//{
//	char arr1[20] = "---------";
//	char arr2[] = "abcdef";
//	strncpy(arr1, arr2, 3);
//	//strncpy(arr1, arr2, 10);
//	printf("%s\n", arr1);
//	return 0;
//}




//strncat
//char* strncat(char* destination, const char* source, size_t num);
//int main()
//{
//	char arr1[20] = "---------";
//	char arr2[] = "abcdef";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}



//strncmp
//int strncmp(const char* str1, const char* str2, size_t num);
//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ���
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abciuf";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr - �ַ�������
//char * strstr ( const char *str1, const char * str2);
//int main()
//{
//	char arr1[] = "uhusdihdf";
//	char arr2[] = "sdih";
//	char* ret = strstr(arr1, arr2);//����s�ĵ�ַ
//	if (ret == NULL)
//		printf("�Ҳ���\n");
//	else
//		printf("%s\n", ret);;
//	return 0;
//}

//ģ��ʵ��strstr
//������ⷨ
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 !='\0' && *s2!='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdbbcef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}