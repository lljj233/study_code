#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#pragma warning (disable:4996)
menu();

#define ROW 10
#define COL 10

//初始化棋盘
void Initboard(char[ROW][COL], int, int);

//打印棋盘
void Dispaly(char[ROW][COL], int, int);

//玩家下棋
void playmove(char board[ROW][COL], int, int);

//电脑下棋
void computermove(char board[ROW][COL], int, int);

//判断输赢

char is_win(char board[ROW][COL], int, int);