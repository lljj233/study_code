#define _CRT_SECURE_NO_WARNINGS 1
#include"SingleList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
}
int main()
{
	TestSList1();
	return 0;
}