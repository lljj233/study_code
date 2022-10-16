#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int a = 3;
int main()
{
	int a = 3;
	printf("a = %d\n", a);
	{
		int b = 2;
		printf("b = %d\n", b);
	}
	//printf("b = %d", b);
	///
}