#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//malloc
//如果开辟成功，则返回一个指向开辟好空间的指针。
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器。
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//存放1-10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放申请的内存
//	free(p);
//	//free函数用来释放动态开辟的内存。
//	//如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//	//如果参数 ptr 是NULL指针，则函数什么事都不做。
//	p = NULL;
//	return 0;
//}
//malloc和free都声明在 stdlib.h 头文件中。



//calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		//malloc申请到的空间没有初始化就会直接返回起始地址
//		//calloc申请好空间后会把空间初始化为0然后返回起始地址
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = 1;
//	}
//	//不够后增加5个整型的空间
//	//如果扩容失败则返回NULL
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//      ptr = NULL; 
//	}
//	//继续使用空间
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}



//常见的动态内存错误

//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(100);
//	//这里要判断malloc的返回值
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = 0;
//	}
//	return 0;
//}

//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(100);
//	//25个整型
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		*(p + i) = 0;//越界访问
//	}
//	free(p);
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;//栈区
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 25; i++)
//	{
//		*p = i;//越界访问
//		p++;
//	}
//	free(p);//此时p已经不在指向起始位置的地址
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 1;
//	//使用
//	//释放
//	free(p);
//	//正确：加上p = NULL;
//	//...
//
//	free(p);//多次释放
//	return 0;
//}

//6.动态开辟内存忘记释放（内存泄漏）
//函数内部进行了malloc操作，返回了malloc开辟的空间的起始地址
//使用完后记得释放
//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 1;
//	//使用
//	//...
//	//要记得free(p);p = NULL;
//	//或者return p;
//}
//int main()
//{
//	//若return p则用一个指针接收后释放
//	int* ptr = test();
//	free(ptr);
//	ptr = NULL;
//	//...
//	return 0;
//}

