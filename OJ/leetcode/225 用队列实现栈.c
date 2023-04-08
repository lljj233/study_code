//https://leetcode.cn/problems/implement-stack-using-queues/

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QDatatype;

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

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Queue* pq, QDatatype x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL)
	{
		assert(pq->tail == NULL);
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	QNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
		pq->tail = NULL;
	pq->size--;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

QDatatype QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}

QDatatype QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->data;
}


typedef struct {
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* pst=(MyStack*)malloc(sizeof(MyStack));
    if(pst==NULL)
    {
        perror("malloc fail");
        return NULL;
    }
    QueueInit(&pst->q1);
    QueueInit(&pst->q2);
    return pst;
}

void myStackPush(MyStack* obj, int x) {
    if(!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1,x);
    }
    else
    {
        QueuePush(&obj->q2,x);
    }
}

int myStackPop(MyStack* obj) {
    Queue* emptyQ=&obj->q1;
    Queue* nonemptyQ=&obj->q2;
    if(!QueueEmpty(&obj->q1))
    {
        nonemptyQ=&obj->q1;
        emptyQ=&obj->q2;
    }
    while(QueueSize(nonemptyQ)>1)
    {
        QueuePush(emptyQ,QueueFront(nonemptyQ));
        QueuePop(nonemptyQ);
    }
    int top=QueueFront(nonemptyQ);
    QueuePop(nonemptyQ);
    return top;
}

int myStackTop(MyStack* obj) {
    if(!QueueEmpty(&obj->q1))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj) {
    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/

