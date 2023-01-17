#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//自定义函数计算字符串长度

//常规
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
////递归
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
////指针-指针
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



//strlen是求字符串长度的，求出的长度不可能为负数，所以返回类型为size_t,即无符号的整型
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



//strcpy - 拷贝字符串函数
//源字符串必须以 '\0' 结束
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变
//int main()
//{
//	char arr1[20] = { "xxxxxxxxx" };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//把arr2放到arr1
//
//	//char* p = "sdhisidjs";//常量字符串
//	//strcpy(p, arr2);//常量字符串不能被修改
//	return 0;
//}

//模拟实现strcpy函数
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
//	my_strcpy(arr1, arr2);//把arr2放到arr1
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat - 在一个字符串后加上字符串
//源字符串必须以 '\0' 结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找目标空间末尾的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加
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



//strcmp - 比较两个字符串的大小
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//int main()
//{
//	char arr1[] = "abadef";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//模拟实现strcmp
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
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
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
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abciuf";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr - 字符串查找
//char * strstr ( const char *str1, const char * str2);
//int main()
//{
//	char arr1[] = "uhusdihdf";
//	char arr2[] = "sdih";
//	char* ret = strstr(arr1, arr2);//返回s的地址
//	if (ret == NULL)
//		printf("找不到\n");
//	else
//		printf("%s\n", ret);;
//	return 0;
//}

//模拟实现strstr
//暴力求解法
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
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}