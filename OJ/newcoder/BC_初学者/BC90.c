//https://www.nowcoder.com/practice/0c83231923c541d2aa15861571831ee5?tpId=107&&tqId=33371&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int num = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &num);
			if (num > 0)
				sum += num;
		}
	}
    printf("%d\n", sum);
	return 0;
}