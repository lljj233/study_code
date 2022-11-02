#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int add(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum1 = 0;
	printf("inut two nums\n");
	scanf("%d %d", &num1, &num2);
	sum1 = add(num1, num2);
	printf("sum=%d\n", sum1);
	return 0;
}

