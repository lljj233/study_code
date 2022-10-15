#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void Intboard(char board[ROW][COL], int row, int col);
//打印棋盘
void Display(char board[ROW][COL], int row, int col);

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑走
void BotMove(char board[ROW][COL], int row, int col);

//判断是否胜利
char Iswin(char board[ROW][COL], int row, int col);
//判断是否有空位
#pragma once
