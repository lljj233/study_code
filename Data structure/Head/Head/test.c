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
	int array[10] = { 3,6,8,13,4,9,8,10,19,5 };//利用建堆插入的思想对数组进行排序
	//排升序建大堆，排降序建小堆
	for (int i = 1; i < 10; i++)
	{
		AdjustUp(&array, i);
	}
	for (int i = 0; i < 10; i++)
	{
		Swap(&array[0], &array[9 - i]);
		AdjustDown(&array, 9 - i, 0);
	}
}

int main()
{
	//test1();
	test2();
	return 0;
}
