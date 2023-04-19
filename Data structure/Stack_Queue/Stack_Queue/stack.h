#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 10

//��̬ջ
typedef int STDataType;
typedef struct Stack
{
	int* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);   //��ʼ��
void STDestroy(ST* ps);//����

void STPush(ST* ps, STDataType x);//��ջ
void STPop(ST* ps);               //��ջ
int STSize(ST* ps);               //�����鳤��
bool STEmpty(ST* ps);             //�ж������Ƿ�Ϊ��
STDataType STTop(ST* ps);         //����ջ��Ԫ��

