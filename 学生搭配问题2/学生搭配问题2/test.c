#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

void menu()
{
	printf("*****  1. ��ѯ  *****\n");
	printf("*****  2. �˳�  *****\n");
}

void show(int i, int n, int m, ST* man, Queue* women, int arr_man[], int arr_women[])
{
	int ret1 = STTop(man) % n;
	int ret2 = QueueFront(women) % m;
	if (ret1 == 0)
		ret1 = n;
	if (ret2 == 0)
		ret2 = m;
	printf("��%d����������������Ϊ%d��Ů���ı��Ϊ%d\n", i + 1, ret1, ret2);
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

	int m = 0, n = 0;//����Ů����������������
	int music = 0;//���������Ŀ
	int arr_man[100] = { 0 };
	int arr_women[100] = { 0 };
	printf("������������Ŀ��");
	scanf("%d", &music);
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
		printf("������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫ��ѯ����Ŀ��\n");
			scanf("%d", &music_num);
			int ret1 = arr_man[music_num - 1] % n;
			int ret2 = arr_women[music_num - 1] % m;
			if (ret1 == 0)
				ret1 = n;
			if (ret2 == 0)
				ret2 = m;
			printf("��%d���У������ı��Ϊ%d��Ů�����Ϊ%d\n", music_num, ret1, ret2);
			printf("��������������\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("������������˳�\n");
			system("pause");
			exit(-1);
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

	STDestroy(&man);
	QueueDestroy(&women);
	return 0;
}