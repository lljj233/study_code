#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
}
void game()
{
	//1.需要存放布置好的雷的信息和存放排查出的雷的信息，需要两个数组
	//2.排查坐标时，为了防止数组下标越界，给数组增加两行两列
	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	PrintBoard(show, ROW, COL);
	//PrintBoard(mine, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	PrintBoard(mine, ROW, COL);
	//排除雷
	FineMine(mine, show, ROW, COL);
	//PrintBoard(mine, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		int input = 0;
		printf("请输入选项\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}