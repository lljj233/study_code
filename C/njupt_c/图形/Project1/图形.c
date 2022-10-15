#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j <=50+i-1; j++)
		{
			printf(" ");
		}
		for (j= 1; j<=11- 2 * i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}