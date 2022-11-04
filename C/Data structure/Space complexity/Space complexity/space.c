#define _CRT_SECURE_NO_WARNINGS 1

//��o�Ľ�����ʾ��������ʱ�临�Ӷȣ������������

void BubbleSort(int* a, int n)
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 1)
			break;
	}
}
//ʱ�����ۼƵģ��ռ��ǲ��ۼƵġ���ѭ������n�Σ��ظ����õ���һ���ռ�
//BubbleSort�ռ临�Ӷ�Ϊo��1��

long long* Fibonacci(int n)
{
	if (n == 0)
		return 0;
	long long* FibArray = (long long*)malloc((n + 1) * sizeof(long long));//o(n)
	FibArray[0] = 0;
	FibArray[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		FibArray[i] = FibArray[i - 1] + FibArray[i - 2];
	}
	return FibArray;
}
//Fibonacci�ռ临�Ӷ�Ϊo��N��  N+6

long long fac(int a)
{
	return a < 2 ? a : fac(a - 1) * a;
}
//�ݹ������N�㣬ÿ�ε��ý���һ��ջ֡��ÿ��ջ֡ʹ���˳������ռ�
//fac�ռ临�Ӷ�Ϊo��N��