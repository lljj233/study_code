#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"
void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);

	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 9);
	SeqListPushBack(&s1, 10);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);

	SeqListPrint(&s1);
 
  SegListDestory(&s1);
}

void TestSeqList2()
{
	SL s1;
	SeqListInit(&s1);

	SeqListFrontBack(&s1, 1);
	SeqListFrontBack(&s1, 2);
	SeqListFrontBack(&s1, 3);
	SeqListFrontBack(&s1, 4);
	SeqListFrontBack(&s1, 5);
	SeqListFrontBack(&s1, 6);
	SeqListFrontBack(&s1, 7);
	SeqListFrontBack(&s1, 8);
	SeqListFrontBack(&s1, 9);

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);

	SeqListPopFront(&s1);
	SeqListPopFront(&s1);

	SeqListPrint(&s1);
 
  SegListDestory(&s1);
}

void TestSeqList3()
{
	SL s1;
	SeqListInit(&s1);

	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);

	SeqListInsert(&s1, 3, 7);
	SeqListInsert(&s1, 3, 8);

	SeqListErase(&s1, 3);

	SeqListModity(&s1, 2, 20);

	SeqListPrint(&s1);

	SegListDestory(&s1);
}
int main()
{
	//TestSeqList1();
	//TestSeqList2();
	TestSeqList3();
	return 0;
}


//#include <stdio.h> 
//
//int main() {
//
//	return 0;
//}