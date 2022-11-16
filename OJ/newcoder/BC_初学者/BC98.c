//https://www.nowcoder.com/practice/7bbcdd2177a445a9b66da79512b32dd7?tpId=107&&tqId=33379&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int num = 0;
	scanf("%d", &num);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (num != arr1[i])
		{
			arr2[j] = arr1[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}