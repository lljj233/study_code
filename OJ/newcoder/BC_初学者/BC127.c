//https://www.nowcoder.com/practice/57c71982296b45b281838c2a40283c19?tpId=107&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking&difficulty=&judgeStatus=&tags=&title=&sourceUrl=&gioEnter=menu

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[20] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i + 1])
			max = arr[i + 1];
	}
	printf("%d", max);
	return 0;
}