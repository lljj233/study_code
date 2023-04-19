#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
#include"queue.h"

//int main()
//{
//	ST st;
//	STInit(&st);
//	STPush(&st, 1);
//	STPush(&st, 2);
//	STPush(&st, 3);
//	printf("%d ", STTop(&st));
//	STPop(&st);
//	STPush(&st, 4);
//	STPush(&st, 5);
//	
//	while (!STEmpty(&st))
//	{
//		printf("%d ", STTop(&st));
//		STPop(&st);
//	}
//
//	STDestroy(&st);
//
//	return 0;
//}

int main()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	QueueDestroy(&q);
	return 0;
}

