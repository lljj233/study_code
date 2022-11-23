//https://www.nowcoder.com/practice/f5a29bacfc514e5a935723857e1245e4?tpId=107&&tqId=33387&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int flag = 0;
	for (i = 1; i < n; i++)
	{
		if (flag == 1)
			break;
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
				flag = 1;
		}
	}
	if (flag == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}