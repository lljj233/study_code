#define _CRT_SECURE_NO_WARNINGS 1

//��o�Ľ�����ʾ��������ʱ�临�Ӷȣ������������

//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 1)
//			break;
//	}
//}
//ʱ�����ۼƵģ��ռ��ǲ��ۼƵġ���ѭ������n�Σ��ظ����õ���һ���ռ�
//BubbleSort�ռ临�Ӷ�Ϊo��1��

//long long* Fibonacci(int n)
//{
//	if (n == 0)
//		return 0;
//	long long* FibArray = (long long*)malloc((n + 1) * sizeof(long long));//o(n)
//	FibArray[0] = 0;
//	FibArray[1] = 1;
//	for (int i = 2; i <= n; ++i)
//	{
//		FibArray[i] = FibArray[i - 1] + FibArray[i - 2];
//	}
//	return FibArray;
//}
//Fibonacci�ռ临�Ӷ�Ϊo��N��  N+6

//long long fac(int a)
//{
//	return a < 2 ? a : fac(a - 1) * a;
//}
//�ݹ������N�㣬ÿ�ε��ý���һ��ջ֡��ÿ��ջ֡ʹ���˳������ռ�
//fac�ռ临�Ӷ�Ϊo��N��




//����һ�����飬�������е�Ԫ������k��λ�ã�kΪ�Ǹ���
//Ҫ��ռ临�Ӷ�Ϊo��1��
//���磺���� 1 2 3 4 5 6 7  k=3   ��� 5 6 7 1 2 3 4

//˼·һ����תk��(Ч�ʵͣ�ʱ�临�Ӷ�Ϊo��N*k��)
//void rotate(int* nums, int numSize, int k)
//{
//	for (int i = 0; i < numSize; ++i)
//	{
//		int temp = nums[numSize - 1];
//		for (int end = numSize - 2; end >= 0; --end)
//		{
//			nums[end + 1] = nums[end];
//		}
//		nums[0] = temp;
//	}
//}

//˼·�����Ѻ�k������ǰ�棬��ʣ�µķ��ں��棬ʱ�临�ӶȺͿռ临�Ӷȶ�Ϊo��N��

//˼·�����Ѻ�k�����ã��ٰ�ʣ�µ����ã�����������
//void Reverse(int* nums, int left, int right)//���ú���
//{
//	while (left < right)
//	{
//		int temp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = temp;
//		++left;
//		--right;
//	}
//}
//void rotate(int* nums, int numSize, int k)
//{
//	//k�������鳤��ʱԽ������
//	if (k >= numSize)
//	{
//		k %= numSize;
//	}
//	Reverse(nums, numSize - k, numSize - 1);
//	Reverse(nums, 0, numSize - k - 1);
//	Reverse(nums, 0, numSize - 1);
//}
