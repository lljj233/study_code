//https://www.nowcoder.com/practice/2f058b1e89ae43f7ab650c0fd0b71fa8?tpId=107&&tqId=33386&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	int flag = 1;
	for (i = 0; i < n; i++)
	{
		if (flag == 0)
			break;
		for (j = 0; j < m; j++)
		{
			if(arr1[i][j]!=arr2[i][j])
			flag = 0;
		}
	}
	if (flag == 0)
		printf("No");
	else
		printf("Yes");
	return 0;
}