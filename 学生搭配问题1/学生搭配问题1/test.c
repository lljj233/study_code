#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

//ͼ�λ���ѯ����
void menu()
{
	printf("*****  1. ��ѯ  *****\n");
	printf("*****  2. �˳�  *****\n");
}

//ȡ������Ԫ�ز���¼�������У����Ž��г����в���
void show(int i, int n, int m, Queue* man, Queue* women, int arr_man[], int arr_women[])
{
	int ret1 = QueueFront(man) % n;
	int ret2 = QueueFront(women) % m;
	//������������д���
	if (ret1 == 0)
		ret1 = n;
	if (ret2 == 0)
		ret2 = m;
	printf("��%d����������������Ϊ%d��Ů���ı��Ϊ%d\n", i + 1, ret1, ret2);
	arr_man[i] = QueueFront(man);
	arr_women[i] = QueueFront(women);
	QueuePop(man);
	QueuePop(women);
}

int main()
{
	Queue man;//����һ����������
	Queue women;//����һ��Ů������

	QueueInit(&man);//��ʼ����������
	QueueInit(&women);//��ʼ��Ů������

	int m = 0, n = 0;//����Ů����������������
	int music = 0;//���������Ŀ
	int arr_man[10] = { 0 };//����һ���������������������е���Ԫ��
	int arr_women[10] = { 0 };//����һ��Ů����������Ů�������е���Ԫ��
	printf("������������Ŀ��");
	scanf("%d", &music);
	printf("������Ů��������");
	scanf("%d", &m);
	printf("����������������");
	scanf("%d", &n);
	for (int i = 1; i <= m; i++)
	{
		QueuePush(&women, i);//�������������������
	}
	for (int i = 1; i <= n; i++)
	{
		QueuePush(&man, i);//����Ů�������������
	}

	//�ж�����Ů��������
	int min = m > n ? n : m;
	int max = m > n ? m : n;

	//������Ŀ���������������������в�ͬ�Ĳ���
	if (music <= max)
	{
		for (int i = 0; i < music; i++)//������Ŀ�������ж�ѭ��������ÿ��ѭ����¼��Ԫ�غ���г����в�����ƥ��
		{
			show(i, n, m, &man, &women, arr_man, arr_women);
			//��Ŀ���е�����Ϊ��ʱ���������еĲ���
			if (QueueEmpty(&man))
			{
				for (int j = 0; j < music - min; j++)
				{
					QueuePush(&man, j + 1);
				}
			}
			if (QueueEmpty(&women))
			{
				for (int j = 0; j < music - min; j++)
				{
					QueuePush(&women, j + 1);
				}
			}
		}
	}
	else
	{
		//���������������������Ŀ��Ŀһ��
		for (int i = 0; i < music - m; i++)
		{
			QueuePush(&women, i + 1);
		}
		for (int i = 0; i < music - n; i++)
		{
			QueuePush(&man, i + 1);
		}
		for (int i = 0; i < music; i++)
		{
			show(i, n, m, &man, &women, arr_man, arr_women);
			if (QueueEmpty(&man) && QueueEmpty(&women))
				break;
		}
	}
	
	int music_num = 0;
	int input = 0;
	//�û�ѡ����洦��
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

	//�ͷŴ�������������
	QueueDestroy(&man);
	QueueDestroy(&women);
	return 0;
}