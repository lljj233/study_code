#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Init_board(char board[ROW][COL],int row,int col);//��ʼ������
void Print_board(char board[ROW][COL], int row, int col);//��ӡ����
void Play_move(char board[ROW][COL], int row, int col);//�������
void Computer_move(char board[ROW][COL], int row, int col);//��������
char is_win(char board[ROW][COL], int row, int col);//�ж���Ӯ