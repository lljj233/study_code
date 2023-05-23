#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

int main()
{
	ST man;
	Queue women;

	STInit(&man);
	QueueInit(&women);

	int m = 0, n = 0;//����Ů����������������
	int man_num = 0, women_num = 0, music_num = 0;
	int music = 0;//���������Ŀ
	int arr_man[100] = { 0 };
	int arr_women[100] = { 0 };
	printf("������������Ŀ��");
	scanf("%d", &music);
	int music_same = music;
	music = 1;
	printf("������Ů��������");
	scanf("%d", &m);
	printf("����������������");
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
	if (music_same <= min)
	{
		for (int i = 0; i < music_same; i++)
		{
			printf("��%d������%d�������͵�%d��Ů�����\n", i + 1, STTop(&man), QueueFront(&women));
			arr_man[i] = STTop(&man);
			arr_women[i] = QueueFront(&women);
			QueuePop(&women);
			STPop(&man);
		}
	}
	else if (music_same > min && music_same < max)
	{
		for (int i = 0; i < min; i++)
		{
			printf("��%d������%d�������͵�%d��Ů�����\n", music, STTop(&man), QueueFront(&women));
			arr_man[i] = STTop(&man);
			arr_women[i] = QueueFront(&women);
			QueuePop(&women);
			STPop(&man);
			if (QueueEmpty(&women))
			{
				for (int j = 0; j < max - min; j++)
				{
					QueuePush(&women, j + 1);
				}
			}
			if (STEmpty(&man))
			{
				for (int j = 0; j < max - min; j++)
				{
					STPush(&man, j + 1);
				}
			}
			music++;
		}
		while ((!STEmpty(&man)) && (!QueueEmpty(&women)))
		{
			for (int i = 0; i < max - min; i++)
			{
				if (min == music_same)
					break;
				if (m > n)
				{
					int ret = STTop(&man) % n;
					if (STTop(&man) % n == 0)
						ret = n;
					printf("��%d������%d�������͵�%d��Ů�����\n", music, ret, QueueFront(&women));
					arr_man[min + i] = STTop(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					STPop(&man);
					min++;
				}
				else
				{
					int ret = QueueFront(&women) % m;
					if (QueueFront(&women) % m == 0)
						ret = m;
					printf("��%d������%d�������͵�%d��Ů�����\n", music, STTop(&man), ret);
					arr_man[min + i] = STTop(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					STPop(&man);
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
			printf("��%d������%d�������͵�%d��Ů�����\n", music, STTop(&man), QueueFront(&women));
			arr_man[i] = STTop(&man);
			arr_women[i] = QueueFront(&women);
			STPop(&man);
			QueuePop(&women);
			if (QueueEmpty(&women))
			{
				for (int j = 0; j < max - min; j++)
				{
					QueuePush(&women, j + 1);
				}
			}
			if (STEmpty(&man))
			{
				for (int j = 0; j < max - min; j++)
				{
					STPush(&man, j + 1);
				}
			}
			music++;
		}
		while ((!QueueEmpty(&women)) && (!STEmpty(&man)))
		{
			for (int i = 0; i < max - min; i++)
			{
				if (m > n)
				{
					int ret = STTop(&man) % n;
					if (STTop(&man) % n == 0)
						ret = n;
					printf("��%d������%d�������͵�%d��Ů�����\n", music, ret, QueueFront(&women));
					arr_man[min + i] = STTop(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					STPop(&man);
				}
				else
				{
					int ret = QueueFront(&women) % m;
					if (QueueFront(&women) % m == 0)
						ret = m;
					printf("��%d������%d�������͵�%d��Ů�����\n", music, STTop(&man), ret);
					arr_man[min + i] = STTop(&man);
					arr_women[min + i] = QueueFront(&women);
					QueuePop(&women);
					STPop(&man);
				}
				music++;
			}
		}
	}

	printf("������Ҫ��ѯ����Ŀ��");
	scanf("%d", &music_num);
	if (m > n)
	{
		int ret = arr_man[music_num - 1] % n;
		if (ret == 0)
			ret = n;
		printf("��%d���У������ı��Ϊ%d��Ů�����Ϊ%d\n", music_num,ret, arr_women[music_num - 1]);
	}
	else
	{
		int ret = arr_women[music_num - 1] % m;
		if (ret == 0)
			ret = m;
		printf("��%d���У������ı��Ϊ%d��Ů�����Ϊ%d\n", music_num, arr_man[music_num - 1] % n, ret);
	}

	STDestroy(&man);
	QueueDestroy(&women);
	return 0;
}