#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

void menu()
{
	printf("*****  1. 查询  *****\n");
	printf("*****  2. 退出  *****\n");
}

void show(int i, int n, int m, ST* man, Queue* women, int arr_man[], int arr_women[])
{
	int ret1 = STTop(man) % n;
	int ret2 = QueueFront(women) % m;
	if (ret1 == 0)
		ret1 = n;
	if (ret2 == 0)
		ret2 = m;
	printf("第%d曲：跳舞的男生编号为%d，女生的编号为%d\n", i + 1, ret1, ret2);
	arr_man[i] = STTop(man);
	arr_women[i] = QueueFront(women);
	STPop(man);
	QueuePop(women);
}

int main()
{
	ST man;
	Queue women;

	STInit(&man);
	QueueInit(&women);

	int m = 0, n = 0;//定义女生人数和男生人数
	int music = 0;//定义歌曲曲目
	int arr_man[100] = { 0 };
	int arr_women[100] = { 0 };
	printf("请输入音乐数目：");
	scanf("%d", &music);
	printf("请输入女生人数：");
	scanf("%d", &m);
	printf("请输入男生人数：");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		STPush(&man, i + 1);
	}
	for (int i = 0; i < m; i++)
	{
		QueuePush(&women, i + 1);
	}
	int min = m > n ? n : m;
	int max = m > n ? m : n;
	if (music <= max)
	{
		for (int i = 0; i < music; i++)
		{
			show(i, n, m, &man, &women, arr_man, arr_women);
			if (STEmpty(&man))
			{
				for (int j = 0; j < music - min; j++)
				{
					STPush(&man, j + 1);
				}
			}
			if (QueueEmpty(&women))
			{
				for (int j = 0; j < music - min; j++)
				{
					QueuePush(&women, j + 1);
				}
			}
			if (STEmpty(&man) && QueueEmpty(&women))
				break;
		}
	}
	else
	{
		for (int i = 0; i < music - m; i++)
		{
			QueuePush(&women, i + 1);
		}
		for (int i = 0; i < music - n; i++)
		{
			STPush(&man, i + 1);
		}
		for (int i = 0; i < music; i++)
		{
			show(i, n, m, &man, &women, arr_man, arr_women);
		}
	}


	int music_num = 0;
	int input = 0;
	do
	{
		menu();
		printf("请输入选项\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要查询的曲目：\n");
			scanf("%d", &music_num);
			int ret1 = arr_man[music_num - 1] % n;
			int ret2 = arr_women[music_num - 1] % m;
			if (ret1 == 0)
				ret1 = n;
			if (ret2 == 0)
				ret2 = m;
			printf("第%d曲中，男生的编号为%d，女生编号为%d\n", music_num, ret1, ret2);
			printf("按下任意键后清空\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("按下任意键后退出\n");
			system("pause");
			exit(-1);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	STDestroy(&man);
	QueueDestroy(&women);
	return 0;
}