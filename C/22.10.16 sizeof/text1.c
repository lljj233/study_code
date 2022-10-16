#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	printf("char的字节为：%d\n", sizeof(char));
	printf("int的字节为：%d\n", sizeof(int));
	printf("long的字节为：%d\n", sizeof(long));
	printf("long long的字节为：%d\n", sizeof(long long));
	printf("float的字节为：%d\n", sizeof(float));
	printf("double的字节为：%d\n", sizeof(double));
	return 0;
}