#define _CRT_SECURE_NO_WARNINGS 1

//大o的渐进表示，类似于时间复杂度，计算变量个数

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
//时间是累计的，空间是不累计的。即循环走了n次，重复利用的是一个空间
//BubbleSort空间复杂度为o（1）

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
//Fibonacci空间复杂度为o（N）  N+6

//long long fac(int a)
//{
//	return a < 2 ? a : fac(a - 1) * a;
//}
//递归调用了N层，每次调用建立一个栈帧，每个栈帧使用了常数个空间
//fac空间复杂度为o（N）




//给定一个数组，将数组中的元素右移k个位置，k为非负数
//要求空间复杂度为o（1）
//例如：输入 1 2 3 4 5 6 7  k=3   输出 5 6 7 1 2 3 4

//思路一：旋转k次(效率低，时间复杂度为o（N*k）)
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

//思路二：把后k个放在前面，把剩下的放在后面，时间复杂度和空间复杂度都为o（N）

//思路三：把后k个逆置，再把剩下的逆置，再整体逆置
//void Reverse(int* nums, int left, int right)//逆置函数
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
//	//k大于数组长度时越界问题
//	if (k >= numSize)
//	{
//		k %= numSize;
//	}
//	Reverse(nums, numSize - k, numSize - 1);
//	Reverse(nums, 0, numSize - k - 1);
//	Reverse(nums, 0, numSize - 1);
//}
