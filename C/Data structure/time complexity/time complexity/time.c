#define _CRT_SECURE_NO_WARNINGS 1

//大o的渐进表示法

//推导大o阶方法
//1.用常数代替运行时间中所有的加法常数
//2.在修改后的运行次数函数中只保留最高阶项
//3.如果最高阶项存在且不是1，则除去与这个项目相乘的常数得到的结果就是大o阶


//void func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d", count);
//}
//func1执行的次数：N^2+2*N+10
//func1时间复杂度为o（N^2）

//void func2(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d", count);
//}
//func2时间复杂度为o（N）

//void func3(int N,int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d", count);
//}
//func3时间复杂度为o（N+M）
//如果M >> N,则func3时间复杂度为o（M）
//如果M与N差不多大,则func3时间复杂度为o（M）或o（N）


//void func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d", count);
//}
//func4时间复杂度为o（1）  确定的常数此都是o（1）

//const char* strchr(const char* str, char character)
//{
//	while (*str != '\0')
//	{
//		if (*str == character)
//			return str;
//		++str;
//	}
//	return 0;
//}
////假设字符串长度为N
// 最好情况：o（1）
// 平均情况：o（N/2）
// 最坏情况：o（N）
// 算法复杂度存在这三种情况时选最坏
//strchr时间复杂度为o（N）

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
//等差数列首项为N，尾项为1,(N+1)*N/2
//BubbleSort时间复杂度为o（N^2）

//int BinarySrarch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n;
//	while (begin < n)
//	{
//		int mid = (begin + end) / 2;
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//最好情况：o（1）
//假设找了X次
// 2^X=N  =>X=logN
//BinarySrarch时间复杂度为o（logN）

//long long fac(int a)
//{
//	return a < 2 ? a : fac(a - 1) * a;
//}
//递归调用了N次，每次运算了3（o（1））次，整体就是o（N）
//fac时间复杂度为o（N）



//数组nums包含了从0到n的所有整数，但其中缺失一个
//编写代码找出缺失的那一个
//要求时间复杂度为o（n）
//例如：输入 3 0 1    输出2

//思路一：排序->0 1 3  遍历比较
//时间复杂度不符合，最快为o（N*logN）

//思路二：把0-n相加，然后减去nums里的数相加

//思路三：按位异或，相同为0，相异为1
//nums中的所有数以此与0-n的所有数异或，最后剩的数就是所缺失数

//思路三
//int MissingNumber(int* nums, int numsSize)
//{
//	int x = 0;//假设x为所求,0与任何数异或都为该数
//	//先与数组中的值异或
//	for (int i = 0; i < numsSize;i++)
//	{
//		x ^= nums[i];
//		//再与0-n之间的数异或
//		for (int j = 0; j < numsSize + 1; j++)
//		{
//			x ^= j;
//		}
//	}
//	return x;
//}