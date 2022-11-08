#define _CRT_SECURE_NO_WARNINGS 1
#include"chess.h"

void menu()
{
	printf("--------------\n");
	printf("--- 1.play ---\n");
	printf("--- 2.exit ---\n");
	printf("--------------\n");
}

void game()
{
	char board[ROW][COL];
	char ret = 0;
	Check_board(board, ROW, COL);
    Print_board(board, ROW, COL);
	while (1)
	{
		Player_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'A')
			break;

		Computer_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'A')
			break;
	}
	if (ret == '*')
		printf("computer win\n");
	if (ret == '#')
		printf("player win\n");
	if (ret == 'B')
		printf("no win\n");
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("please input num\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("start game\n");
			game();
			break;
		case 2:
			printf("exit game\n");
			break;
		default:
			printf("please input again\n");
			break;
		}
	} while (input);
	return;
}