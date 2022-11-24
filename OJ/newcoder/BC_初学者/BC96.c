//https://www.nowcoder.com/practice/22e87f8a8d764a6582710f38d1b40c6e?tpId=107&&tqId=33377&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[0] <= arr[1])
		{
			count++;
			if (arr[i] > arr[i + 1])
				break;
		}
		else
		{
			count++;
			if (arr[i] < arr[i + 1])
				break;
		}
	}
	if (count == n)
		printf("sorted");
	else
		printf("unsorted");
	return 0;
}