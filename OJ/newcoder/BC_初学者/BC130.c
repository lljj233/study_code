//https://www.nowcoder.com/practice/4c49a3a1559141f7a080a48c98cca4cb?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

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
	int find = 0;
	scanf("%d", &find);
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (find == arr[i])
			count++;
	}
	printf("%d", count);
	return 0;
}