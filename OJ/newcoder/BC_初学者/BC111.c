//https://www.nowcoder.com/practice/242eafef2a704c0ca130d563b7b3ee2d?tpId=107&&tqId=33392&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

// #include<stdio.h>
// #define N 100
// int main()
// {
// 	int num = 0;
// 	scanf("%d", &num);
// 	int arr[N] = { 0 };
// 	int i = 0;
// 	while (num)
// 	{
// 		arr[i] = num % 6;
// 		num /= 6;
// 		i++;
// 	}
// 	for (i--; i >= 0; i--)
// 	{
// 		printf("%d", arr[i]);
// 	}
// 	return 0;
// }


#include<stdio.h>
int func(int num)
{
	if (num)
	{
		func(num/6);
		printf("%d", num % 6);
	}
} 
		
int main()
{
	int num = 0;
	scanf("%d", &num);
	func(num);
	return 0;
}