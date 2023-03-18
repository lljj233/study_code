#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

//void TestSList1()
//{
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
//}

//void TestSList2()
//{
//	SLTNode* plist = NULL;
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPrint(plist);
//}

//void TestSList3()
//{
//	SLTNode* plist = NULL;
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPopBack(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//}

//void TestSList4()
//{
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
//
//	//把值为2的节点*2
//	SLTNode* ret = SListFind(plist, 2);
//	ret->data *= 2;
//	SListPrint(plist);
//}

//void TestSList5()
//{
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SLTDataType* ret = SListFind(plist, 2);
//	SListInsert(&plist, ret, 5);
//	SListPrint(plist);
//}

//void TestSList6()
//{
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
//	SLTDataType* ret = SListFind(plist, 2);
//	SListErase(&plist, ret);
//	ret = NULL;
//	SListPrint(plist);
//}

void TestSList7()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SLTDataType* ret = SListFind(plist, 2);
	SListInsertAfter(ret, 5);
	SListPrint(plist);
	SListEraseAfter(ret);
	SListPrint(plist);
}

int main()
{
	//TestSList1();
	//TestSList2();
	//TestSList3();
	//TestSList4();
	//TestSList5();
	//TestSList6();
	TestSList7();
	return 0;
}

