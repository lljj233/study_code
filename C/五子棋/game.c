#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "game.h"
//菜单
menu()
{
	printf("*****************************\n");
	printf("*****      五子棋游戏     ****\n");
	printf("*****1.开始游戏 0 .退出游戏****\n");
	printf("*****    请输入你的选择    ****\n");
	printf("*****************************\n");

}

//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= col; i++)
	{
		printf("  %d ", i);
	}
	printf("\n");
	for (i = 0; i <= row; i++)
	{
		int k = 0;
		int x = 0;
		for (j = 0; j <= col; j++)
		{
			if (j < col)
			{
				printf("+---");
			}
			if (j == col)
			{
				printf("+");
				printf("\n");
			}
		}
		for (k = 0; k < col; k++)
		{
			if (i < row)
				printf("| %c ", board[i][k]);
			if (k + 1 == col && i < row)
			{
				printf("|");
				printf("\n");
			}
		}


	}
}



void playmove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>");
	int x = 0;
	int y = 0;

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请重输入!\n");
		}
	}
}


void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋>\n");
	while (1)
	{
		x = rand() % ROW;//0~2
		y = rand() % COL;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}





//返回值表述当前游戏状况;
//1.返回*表示玩家获胜
//2.返回#表示电脑获胜
//3.返回' '表示还未分出胜负
//4.返回q表示棋盘满了和棋
char is_win(char board[ROW][COL], int row, int col)
{
	//1.行连成一条线,赢家产生
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL - 4; j++)
		{
			if (board[i][j] != ' ' &&
				board[i][j] == board[i][j + 1] &&
				board[i][j] == board[i][j + 2] &&
				board[i][j] == board[i][j + 3] &&
				board[i][j] == board[i][j + 4])
			{
				return board[i][j];
			}
		}
	}

	//2.列连成一条线,赢家产生
	for (j = 0; j < COL; j++)
	{
		for (i = 0; i < COL - 4; i++)
		{
			if (board[i][j] != ' ' &&
				board[i][j] == board[i + 1][j] &&
				board[i][j] == board[i + 2][j] &&
				board[i][j] == board[i + 3][j] &&
				board[i][j] == board[i + 4][j])
			{
				return board[i][j];
			}
		}
	}
	//3.对角线连成一条线,赢家产生

	for (i = 0; i < COL - 4; i++)
	{
		if (board[i][i] != ' ' &&
			board[i][i] == board[i + 1][i + 1] &&
			board[i][i] == board[i + 2][i + 2] &&
			board[i][i] == board[i + 3][i + 3] &&
			board[i][i] == board[i + 4][i + 4])
		{
			return board[i][i];
		}
		if (board[i][i + 4] != ' ' &&
			board[i][i + 4] == board[i + 1][i + 3] &&
			board[i][i + 4] == board[i + 2][i + 2] &&
			board[i][i + 4] == board[i + 3][i + 1] &&
			board[i][i + 4] == board[i + 4][i]) {
			return board[i][i + 4];
		}
	}

	//4.判断棋盘是否满了

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return ' ';
			}
		}
	}

	return 'q';
}

void game()
{
	//初始化棋盘
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	//打印棋盘
	Display(board, ROW, COL);

	//下棋
	char ret = '0';
	while (1)
	{

		//玩家下棋
		printf("现在是玩家下棋\n");
		playmove(board, ROW, COL);
		Display(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		//电脑下棋
		printf("现在是电脑下棋\n");
		computermove(board, ROW, COL);
		Display(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}


	}
	if (ret == '*')
	{
		printf("恭喜你取得胜利\n");
	}
	else if (ret == '#')
	{
		printf("很遗憾，你输给了电脑\n");
	}
	else
	{
		printf("平局\n");
	}

}




