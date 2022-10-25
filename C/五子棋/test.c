#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "game.h"
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入有误，请重新输入\n");

		}

	} while (input);


	return 0;
}