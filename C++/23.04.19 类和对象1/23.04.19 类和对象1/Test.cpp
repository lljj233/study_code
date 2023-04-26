#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
////C++兼容C，struc升级成了类，不过在C++中更喜欢用class
//struct Stack
//{
//	//成员函数
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		capacity = capacity;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		//扩容
//		a[top--] = x;
//	}
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//
//	//成员变量
//	int* a;
//	int top;
//	int capacity;
//};
//int main()
//{
//	struct Stack st1;
//	st1.Init(10);
//
//	Stack st2;
//	st2.Init();
//	st2.Push(1);
//	st2.Destroy();
//	return 0;
//}

