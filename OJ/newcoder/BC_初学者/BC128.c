//https://www.nowcoder.com/practice/c98aeab2362c459dbc840d4c75f07729?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int num = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		num *= i;
		sum += num;
	}
	printf("%d", sum);
}