#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"

//void TestList1()
//{
//	LTNode* plist = LTInit();
//	LTPushBack(plist, 1);
//	LTPushBack(plist, 2);
//	LTPushBack(plist, 3);
//	LTPushBack(plist, 4);
//	LTPrint(plist);
//
//	LTPopBack(plist);
//	LTPopBack(plist);
//	LTPrint(plist);
//
//	LTPushFront(plist, 1);
//	LTPushFront(plist, 2);
//	LTPrint(plist);
//}

void TestList2()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);

	LTDataType* ret = LTFind(plist, 2);
	if (ret)
	{
		LTErase(ret);
		ret = NULL;
	}
	LTPrint(plist);

	LTInsert(plist->next->next, 2);
	LTPrint(plist);

	LTDestroy(plist);
	plist = NULL;
}

int main()
{
	//TestList1();
	TestList2();
	return 0;
}

