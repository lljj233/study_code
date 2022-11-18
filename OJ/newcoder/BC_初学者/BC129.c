//https://www.nowcoder.com/practice/89238e99c36e450786ccf3a9e7481b7b?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include<stdio.h>
int max3(int a, int b, int c)
{
	int i = 0;
	int arr[3] = { a,b,c };
	int max = arr[0];
	for (i = 0; i < 3; i++)
	{
		if (max < arr[i + 1])
			max = arr[i + 1];
	}
	return max;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	float num1 = max3(a + b, b, c);
	float num2 = max3(a, b + c, c);
	float num3 = max3(a, b, b + c);
	float ret = num1 / (num2 + num2);
	printf("%.2f", ret);
	return 0;
}