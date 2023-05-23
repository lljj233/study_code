#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//’ª
typedef int QDatatype;
typedef struct Stack
{
	int* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);   
void STDestroy(ST* ps);

void STPush(ST* ps, QDatatype x);
void STPop(ST* ps);               
int STSize(ST* ps);          
bool STEmpty(ST* ps);
QDatatype STTop(ST* ps);

//∂”¡–
typedef struct QueueNode
{
	struct QueueNode* next;
	QDatatype data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDatatype x);
void QueuePop(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
QDatatype QueueFront(Queue* pq);

