#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


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