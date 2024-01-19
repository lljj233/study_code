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
	printf("������Ҫȡ��ǰk������ֵ��");
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
	//���ϵ������ѣ�ʱ�临�Ӷ�ΪO��N*logN��
	int array[10] = { 3,6,8,13,4,9,8,10,19,5 };//���ý��Ѳ����˼��������������
	//�����򽨴�ѣ��Ž���С��
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
	//���µ������ѣ�ʱ�临�Ӷ�ΪO��N��
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

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
