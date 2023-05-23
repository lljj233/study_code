#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

int main()
{
	Queue man;
	Queue women;

	QueueInit(&man);
	QueueInit(&women);

	int m = 0, n = 0;//定义女生人数和男生人数
	int music_num = 0;
	int music = 0;//定义歌曲曲目
	int arr_man[10] = { 0 };
	int arr_women[10] = { 0 };
	printf("请输入音乐数目：");
	scanf("%d", &music);
	int music_same = music;
	music = 1;
	printf("请输入女生人数：");
	scanf("%d", &m);
	printf("请输入男生人数：");
	scanf("%d", &n);
	for (int i = 0; i < m; i++)
	{
		QueuePush(&women, i + 1);
	}
	for (int i = 0; i < n; i++)
	{
		QueuePush(&man, i + 1);
	}
	int min = m > n ? n : m;
	int max = m > n ? m : n;


	if (music_same <= min)
	{
		for (int i = 0; i < music_same; i++)
		{
			printf("第%d曲：第%d个男生和第%d个女生配对\n", i+1, QueueFront(&man), QueueFront(&women));
			arr_man[i] = QueueFront(&man);
			arr_women[i] = QueueFront(&women);
			QueuePop(&women);
			QueuePop(&man);
		}
	}
	else if(music_same > min && music_same < max)
	{
		for (int i = 0; i < min; i++)
		{
			printf("第%d曲：第%d个男生和第%d个女生配对\n", music, QueueFront(&man), QueueFront(&women));
			arr_man[i] = QueueFront(&man);
			arr_women[i] = QueueFront(&women);
			QueuePop(&women);
			QueuePop(&man);
			if (QueueEmpty(&women))
			{
				for (int j = 0; j < max - min; j++)
				{
					QueuePush(&women, j + 1);
				}
			}
			if (QueueEmpty(&man))
			{
				for (int j = 0; j < max - min; j++)
				{
					QueuePush(&man, j + 1);
				}
			}
			music++;
		}
		while ((!QueueEmpty(&man))&&(!QueueEmpty(&women)))
		{
			for (int i = 0; i < max - min; i++)
			{
				if (min == music_same)
					break;
				if (m > n)
				{
					int ret = QueueFront(&man) % n;
					if (QueueFront(&man) % n == 0)
						ret = n;
					printf("第%d曲：第%d个男生和第%d个女生配对\n", music, ret, QueueFront(&women));
					arr_man[min + i] = QueueFront(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					QueuePop(&man);
					min++;
				}
				else
				{
					int ret = QueueFront(&women) % m;
					if (QueueFront(&women) % m == 0)
						ret = m;
					printf("第%d曲：第%d个男生和第%d个女生配对\n", music, QueueFront(&man), ret);
					arr_man[min + i] = QueueFront(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					QueuePop(&man);
					min++;
				}
				music++;
			}
			break;
		}
	}
	else
	{
		for (int i = 0; i < min; i++)
		{
			printf("第%d曲：第%d个男生和第%d个女生配对\n", music, QueueFront(&man), QueueFront(&women));
			arr_man[i] = QueueFront(&man);
			arr_women[i] = QueueFront(&women);
			QueuePop(&man);
			QueuePop(&women);
			if (QueueEmpty(&women))
			{
				for (int j = 0; j < max - min; j++)
				{
					QueuePush(&women, j + 1);
				}
			}
			if (QueueEmpty(&man))
			{
				for (int j = 0; j < max - min; j++)
				{
					QueuePush(&man, j + 1);
				}
			}
			music++;
		}
		while ((!QueueEmpty(&women)) && (!QueueEmpty(&man)))
		{
			for (int i = 0; i < max - min; i++)
			{
				if (m > n)
				{
					int ret = QueueFront(&man) % n;
					if (QueueFront(&man) % n == 0)
						ret = n;
					printf("第%d曲：第%d个男生和第%d个女生配对\n", music, ret, QueueFront(&women));
					arr_man[min + i] = QueueFront(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					QueuePop(&man);
				}
				else
				{
					int ret = QueueFront(&women) % m;
					if (QueueFront(&women) % m == 0)
						ret = m;
					printf("第%d曲：第%d个男生和第%d个女生配对\n", music, QueueFront(&man), ret);
					arr_man[min + i] = QueueFront(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					QueuePop(&man);
				}
				music++;
			}
		}
	}
	
	


	printf("请输入要查询的曲目：");
	scanf("%d", &music_num);
	if (m > n)
	{
		int ret = arr_man[music_num - 1] % n;
		if (ret == 0)
			ret = n;
		printf("第%d曲中，男生的编号为%d，女生编号为%d\n", music_num, ret, arr_women[music_num - 1]);
	}
	else
	{
		int ret = arr_women[music_num - 1] % m;
		if (ret == 0)
			ret = m;
		printf("第%d曲中，男生的编号为%d，女生编号为%d\n", music_num, arr_man[music_num - 1] % n, ret);
	}

	QueueDestroy(&man);
	QueueDestroy(&women);
	return 0;
}