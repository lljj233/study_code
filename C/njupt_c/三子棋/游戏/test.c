#define _CRT_SECURE_NO_WARNINGS


#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("********1.play********\n");
	printf("********0.exit********\n");
	printf("**********************\n");
}

void game()
{
	char ret = 0;
	//存储数据-二维数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘 - 初始化空格
	Intboard(board, ROW, COL);
	//打印棋盘
	Display(board, ROW, COL);

	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		Display(board, ROW, COL);
		//判断玩家是否胜利
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		BotMove(board, ROW, COL);
		Display(board, ROW, COL);
		//判断电脑是否胜利

		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	//判断状态
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
