#define _CRT_SECURE_NO_WARNINGS 1

//��o�Ľ�����ʾ��

//�Ƶ���o�׷���
//1.�ó�����������ʱ�������еļӷ�����
//2.���޸ĺ�����д���������ֻ������߽���
//3.�����߽�������Ҳ���1�����ȥ�������Ŀ��˵ĳ����õ��Ľ�����Ǵ�o��


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
//func1ִ�еĴ�����N^2+2*N+10
//func1ʱ�临�Ӷ�Ϊo��N^2��

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
//func2ʱ�临�Ӷ�Ϊo��N��

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
//func3ʱ�临�Ӷ�Ϊo��N+M��
//���M >> N,��func3ʱ�临�Ӷ�Ϊo��M��
//���M��N����,��func3ʱ�临�Ӷ�Ϊo��M����o��N��


//void func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d", count);
//}
//func4ʱ�临�Ӷ�Ϊo��1��  ȷ���ĳ����˶���o��1��

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
////�����ַ�������ΪN
// ��������o��1��
// ƽ�������o��N/2��
// ������o��N��
// �㷨���Ӷȴ������������ʱѡ�
//strchrʱ�临�Ӷ�Ϊo��N��

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
//�Ȳ���������ΪN��β��Ϊ1,(N+1)*N/2
//BubbleSortʱ�临�Ӷ�Ϊo��N^2��

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
//��������o��1��
//��������X��
// 2^X=N  =>X=logN
//BinarySrarchʱ�临�Ӷ�Ϊo��logN��

//long long fac(int a)
//{
//	return a < 2 ? a : fac(a - 1) * a;
//}
//�ݹ������N�Σ�ÿ��������3��o��1�����Σ��������o��N��
//facʱ�临�Ӷ�Ϊo��N��



//����nums�����˴�0��n������������������ȱʧһ��
//��д�����ҳ�ȱʧ����һ��
//Ҫ��ʱ�临�Ӷ�Ϊo��n��
//���磺���� 3 0 1    ���2

//˼·һ������->0 1 3  �����Ƚ�
//ʱ�临�ӶȲ����ϣ����Ϊo��N*logN��

//˼·������0-n��ӣ�Ȼ���ȥnums��������

//˼·������λ�����ͬΪ0������Ϊ1
//nums�е��������Դ���0-n��������������ʣ����������ȱʧ��

//˼·��
//int MissingNumber(int* nums, int numsSize)
//{
//	int x = 0;//����xΪ����,0���κ������Ϊ����
//	//���������е�ֵ���
//	for (int i = 0; i < numsSize;i++)
//	{
//		x ^= nums[i];
//		//����0-n֮��������
//		for (int j = 0; j < numsSize + 1; j++)
//		{
//			x ^= j;
//		}
//	}
//	return x;
//}