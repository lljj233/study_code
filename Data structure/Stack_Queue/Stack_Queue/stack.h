#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 10

//静态栈
typedef int STDataType;
typedef struct Stack
{
	int* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);   //初始化
void STDestroy(ST* ps);//销毁

void STPush(ST* ps, STDataType x);//入栈
void STPop(ST* ps);               //出栈
int STSize(ST* ps);               //求数组长度
bool STEmpty(ST* ps);             //判断数组是否为空
STDataType STTop(ST* ps);         //访问栈顶元素

