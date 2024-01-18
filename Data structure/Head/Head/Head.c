#include"Head.h"

void HeadInit(HP* php)
{
	assert(php);
	php->array = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (php->array == NULL)
	{
		perror("malloc fail");
		return;
	}
	php->capacity = 4;
	php->size = 0;
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType* x = *p1;
	*p1 = *p2;
	*p2 = x;
}

void AdjustUp(HPDataType* array, int child)
{
	int parent = (child - 1) / 2;
	while (array[child] > array[parent])
	{
		Swap(&array[child], &array[parent]);
		child = parent;
		parent = (child - 1) / 2;
		if (child == 0)
			break;
	}
}

void AdjustDown(HPDataType* array, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && array[child] < array[child + 1])
			child++;
		if (array[child] > array[parent])
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
	
}

void HeadPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->array, sizeof(HPDataType) * php->capacity*2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		php->array = tmp;
		php->capacity *= 2;
	}
	php->array[php->size] = x;
	php->size++;
	AdjustUp(php->array, php->size - 1);
}

void HeadPop(HP* php)
{
	assert(php);
	assert(!HeadEmpty(php));
	Swap(&php->array[0], &php->array[php->size - 1]);
	php->size--;
	AdjustDown(php->array, php->size, 0);
}

HPDataType HeadTop(HP* php)
{
	assert(php);
	return php->array[0];
}

bool HeadEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

int HeadSize(HP* php)
{
	assert(php);
	return php->size;
}

void HeadDestory(HP* php)
{
	assert(php);
	free(php->array);
	php->array = NULL;
	php->capacity = 0;
	php->size = 0;
}
