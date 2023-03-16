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

void TestSList3()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPopBack(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}
int main()
{
	//TestSList1();
	TestSList3();
	return 0;
}

