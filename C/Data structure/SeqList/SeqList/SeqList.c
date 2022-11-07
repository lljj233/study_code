#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//��ɾ���ҵȹ��ܽӿں�����ʵ��
void SeqListInit(SL* ps1)
{
	ps1->a = NULL;
	ps1->size = 0;
	ps1->capacity = 0;
}

//���ٿռ�
void SegListDestory(SL* ps1)
{
	free(ps1->a);
	ps1->a = NULL;
	ps1->capacity = ps1->size = 0;
}
void SeqListCheckCapacity(SL* ps1)
{
	//����������
	if (ps1->size == ps1->capacity)
	{
		int newcapacity = ps1->capacity == 0 ? 4 : ps1->capacity * 2;
		SQDateType* temp = (SQDateType*)realloc(ps1->a, newcapacity * sizeof(SQDateType));
		if (temp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps1->a = temp;
			ps1->capacity = newcapacity;
		}
	}
}

//ͷ��
void SeqListPushBack(SL* ps1, SQDateType x)
{
	SeqListCheckCapacity(ps1);
	ps1->a[ps1->size] = x;
	ps1->size++;
}
//β��
void SeqListFrontBack(SL* ps1, SQDateType x)
{
	SeqListCheckCapacity(ps1);
	int end = ps1->size - 1;
	while (end >= 0)
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[0] = x;
	ps1->size++;
}
//ͷɾ
void SeqListPopFront(SL* ps1)
{
	assert(ps1->size > 0);
	int start = 1;
	while (start < ps1->size)
	{
		ps1->a[start - 1] = ps1->a[start];
		++start;
	}
	ps1->size--;
}
//βɾ
void SeqListPopBack(SL* ps1)
{
	assert(ps1->size > 0);
	ps1->size--;
}
//��ӡ
void SeqListPrint(SL* ps1)
{
	for (int i = 0; i < ps1->size; ++i)
	{
		printf("%d ", ps1->a[i]);
	}
	printf("\n");
}
//ָ������
void SeqListInsert(SL* ps1, int pos, SQDateType x)
{
	assert(pos < ps1->size);
	SeqListCheckCapacity(ps1);
	int end = ps1->size - 1;
	while (end >= pos)
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[pos] = x;
	ps1->size++;
}
//ָ��ɾ��
void SeqListErase(SL* ps1, int pos)
{
	assert(pos < ps1->size);
	int start = pos + 1;
	while (start < ps1->size)
	{
		ps1->a[start-1] = ps1->a[start];
		++start;
	}
	ps1->size--;
}