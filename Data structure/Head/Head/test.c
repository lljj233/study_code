#include"Head.h"

void test1()
{
	HP hp;
	HeadInit(&hp);
	HeadPush(&hp, 10);
	HeadPush(&hp, 19);
	HeadPush(&hp, 28);
	HeadPush(&hp, 23);
	HeadPush(&hp, 41);
	HeadPush(&hp, 17);

	int k = 0;
	printf("请输入要取的前k个最大的值：");
	scanf("%d", &k);
	while (!HeadEmpty(&hp) && k--)
	{
		printf("%d ", HeadTop(&hp));
		HeadPop(&hp);
	}
	printf("\n");
}

void test2()
{
	//向上调整建堆，时间复杂度为O（N*logN）
	int array[10] = { 3,6,8,13,4,9,8,10,19,5 };//利用建堆插入的思想对数组进行排序
	//排升序建大堆，排降序建小堆
	for (int i = 1; i < 10; i++)
	{
		AdjustUp(&array, i);
	}

	/*int end = 10 - 1;
	while (end > 0)
	{
		Swap(&array[0], &array[end]);
		AdjustDown(&array, end, 0);
		end--;
	}*/

	for (int i = 0; i < 10; i++)
	{
		Swap(&array[0], &array[9 - i]);
		AdjustDown(&array, 9 - i, 0);
	}
}

void test3()
{
	//向下调整建堆，时间复杂度为O（N）
	int array[10] = { 3,6,8,13,4,9,8,10,19,5 };
	for (int i = (10 - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(&array, 10, i);
	}
	int end = 10 - 1;
	while (end > 0)
	{
		Swap(&array[0], &array[end]);
		AdjustDown(&array, end, 0);
		end--;
	}
}

void PrintTopK(const char* file, int k)//在一堆数中找出最大的前k个数
{
	//1.建堆，用array中前k个元素建小堆
	int* topk = (int*)malloc(sizeof(int) * k);
	assert(topk);
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}
	
	//读出前k个数建小堆
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &topk[i]);
	}
	for (int i = (k - 2)/2; i >= 0; i--)
	{
		AdjustDown(topk, k, i);
	}
	
	//2.将剩余n-k个元素依次与堆顶元素交换，不满足条件则继续替换
	int val = 0;
	int ret= fscanf(fout, "%d", &val);
	while (ret != EOF)
	{
		if (val > topk[0])
		{
			topk[0] = val;
			AdjustDown(topk, k, 0);
		}
		ret= fscanf(fout, "%d", &val);
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", topk[i]);
	}
	printf("\n");
	free(topk);
	fclose(fout);
}
void CreatNData()
{
	//造数据
	int n = 10000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}
	for (size_t i = 0; i < n; i++)
	{
		int x = rand() % 10000;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

int main()
{
	//test1();
	//test2();
	//test3();
	//CreatNData();
	PrintTopK("data.txt", 10);
	return 0;
}
