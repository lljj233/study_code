#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	//数组指针
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	//指针数组
//	char* ch[5];
//	
//	//函数指针
//	int (*pf)(const char*)=&my_strlen;
//}



//函数指针数组 - 存放函数指针的数组
//my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	int (*pfA[5])(const char*) = { &my_strlen };//可以存放五个函数的地址
//	return 0;
//}



//通过函数指针写一个计算器计算整数的加减乘除
//void menu()
//{
//	printf("*****************\n");
//	printf("****  1.add  ****\n");//加
//	printf("****  2.sub  ****\n");//减
//	printf("****  3.mul  ****\n");//乘
//	printf("****  4.div  ****\n");//除
//	printf("***** 0.exit ****\n");//退出
//	printf("*****************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////写一个函数指针数组来存放上述函数的地址
//int(*pf[5])(int,int) = { NULL,add,sub,mul,div };
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	return 0;
//}



//指向函数指针数组的指针
//int main()
//{
//	int(*pf[5])(int,int);//函数指针数组
//	int(*(*ppf[5]))(int, int) = &pf;//指向函数指针数组的指针
//	return 0;
//}



//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
//函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
//的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进
//行响应。
//void menu()
//{
//	printf("*****************\n");
//	printf("****  1.add  ****\n");
//	printf("****  2.sub  ****\n");
//	printf("****  3.mul  ****\n");
//	printf("****  4.div  ****\n");
//	printf("***** 0.exit ****\n");
//	printf("*****************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//qsort的用法
//void qsort(void* base,//待排序的数组的起始地址
//	       size_t num,//元素个数
//	       size_t width,//一个元素的大小
//	       int (*cmp)(const void* e1,const void* e2)//两个元素的比较函数
//           )
//{}




////实现一个比较整型的函数
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
////使用qsort对数组进行排序，升序
//void test1()
//{
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	//库函数中一个排序函数：qsort
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//0 1 2 3 4 5 6 7 8 9
//	//打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}



//qsort排序结构体
//struct stu
//{
//	char name[20];
//	int age;
//};
////按照学生的年龄来排序
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void test2()
//{
//	struct stu s[3] = { {"李四",20},{"张三",18},{"王五",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	test2();
//	return 0;
//}