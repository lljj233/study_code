#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

//图形化查询界面
void menu()
{
	printf("*****  1. 查询  *****\n");
	printf("*****  2. 退出  *****\n");
}

//取队列首元素并记录在数组中，接着进行出队列操作
void show(int i, int n, int m, Queue* man, Queue* women, int arr_man[], int arr_women[])
{
	int ret1 = QueueFront(man) % n;
	int ret2 = QueueFront(women) % m;
	//对特殊情况进行处理
	if (ret1 == 0)
		ret1 = n;
	if (ret2 == 0)
		ret2 = m;
	printf("第%d曲：跳舞的男生编号为%d，女生的编号为%d\n", i + 1, ret1, ret2);
	arr_man[i] = QueueFront(man);
	arr_women[i] = QueueFront(women);
	QueuePop(man);
	QueuePop(women);
}

int main()
{
	Queue man;//创建一个男生队列
	Queue women;//创建一个女生队列

	QueueInit(&man);//初始化男生队列
	QueueInit(&women);//初始化女生队列

	int m = 0, n = 0;//定义女生人数和男生人数
	int music = 0;//定义歌曲曲目
	int arr_man[10] = { 0 };//定义一个男生数组存放男生队列中的首元素
	int arr_women[10] = { 0 };//定义一个女生生数组存放女生队列中的首元素
	printf("请输入音乐数目：");
	scanf("%d", &music);
	printf("请输入女生人数：");
	scanf("%d", &m);
	printf("请输入男生人数：");
	scanf("%d", &n);
	for (int i = 1; i <= m; i++)
	{
		QueuePush(&women, i);//根据男生的数量入队列
	}
	for (int i = 1; i <= n; i++)
	{
		QueuePush(&man, i);//根据女生的数量入队列
	}

	//判断男生女生的数量
	int min = m > n ? n : m;
	int max = m > n ? m : n;

	//根据曲目的数量与人数的数量进行不同的操作
	if (music <= max)
	{
		for (int i = 0; i < music; i++)//根据曲目的数量判断循环次数，每次循环记录首元素后进行出队列操作来匹配
		{
			show(i, n, m, &man, &women, arr_man, arr_women);
			//曲目还有但队列为空时则进行入队列的操作
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
		//先入队列至队列数量与曲目数目一样
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
	//用户选择界面处理
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

	//释放创建的两个队列
	QueueDestroy(&man);
	QueueDestroy(&women);
	return 0;
}