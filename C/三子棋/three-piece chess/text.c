#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("*********************\n");
	printf("****    1.play   ****\n");
	printf("****    2.exit   ****\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL];
	char ret = 0;
	//初始化棋盘为全空格
	Init_board(board, ROW, COL);
	Print_board(board, ROW, COL);

	while (1)
	{
		Play_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computer_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
		printf("电脑赢\n");
	else if (ret == '*')
		printf("玩家赢\n");
	else if(ret=='Q')
		printf("平局\n");
}
//判断输赢：电脑赢或者玩家赢或者平局或者游戏未结束
//电脑赢返回#
//玩家赢返回*
//平局返回Q
//游戏继续返回C


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入选项:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}