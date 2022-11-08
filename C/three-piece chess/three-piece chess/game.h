#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Init_board(char board[ROW][COL],int row,int col);//初始化棋盘
void Print_board(char board[ROW][COL], int row, int col);//打印棋盘
void Play_move(char board[ROW][COL], int row, int col);//玩家下棋
void Computer_move(char board[ROW][COL], int row, int col);//电脑下棋
char is_win(char board[ROW][COL], int row, int col);//判断输赢