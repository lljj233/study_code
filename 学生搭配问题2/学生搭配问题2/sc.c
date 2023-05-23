#define _CRT_SECURE_NO_WARNINGS 1
#include"sc.h"

void STInit(ST* ps)
{
	assert(ps);
	ps->a = (QDatatype*)malloc(sizeof(QDatatype) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->capacity = 4;

	ps->top = 0;
}

void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STPush(ST* ps, QDatatype x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		QDatatype* tmp = (QDatatype*)realloc(ps->a, sizeof(QDatatype) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}

int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

QDatatype STTop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));
	return ps->a[ps->top - 1];
}




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

