#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);//��ʼ������
void PrintBoard(char board[ROWS][COLS], int row, int col);//��ӡ����
void SetMine(char mine[ROWS][COLS], int row, int col);//������
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//�ų���