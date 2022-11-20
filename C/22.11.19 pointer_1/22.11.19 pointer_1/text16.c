#define _CRT_SECURE_NO_WARNINGS 1

//指针
//1.指针是内存中一个最小单元的编号，也就是地址
//2.平时的指针指的是指针变量，用来存放内存地址

#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;//取a的地址
//	//int占四个字节，取出的是第一个字节的地址（较小的地址）
//
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}
//虽然不同类型的指针字节都一样，但它们是有意义的
//1.指针类型决定了，指针进行解引用操作的时候一次性访问几个字节
//如果是char*的指针，解引用访问1个字节
//如果是char*的指针，解引用访问2个字节
//如果是int*的指针，解引用访问4个字节
//如果是float*的指针，解引用访问4个字节
//如果是double*的指针，解引用访问8个字节


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//int* 加1就是加4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//char* 加1就是加1个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pc = 1;
//		pc++;
//	}
//}
//指针类型决定指针的步长（指针+1跳过几个字节）
//字符指针+1，跳过1个字节
//整型指针+1，跳过4个字节



//野指针:
//野指针就是指针指向的位置是不可知的

//成因：
//1.指针未初始化
//int main()
//{
//	int* p;//p是局部变量，没有初始化时是随机值
//	*p = 2;//野指针
//	return 0;
//}

//2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 11; i++)//越界
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	/*printf("abc\n");*/
//	printf("%d\n", *p);
//	return 0;
//}


//避免野指针：
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放，及时置NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性



//指针的运算
//1.指针加减整数
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for(vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//2.指针减去指针（前提是两个指针要指向同一块空间）
//指针减指针，得到但是两个指针之间元素的个数的绝对值
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}

//int get_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int len = get_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//3.指针的关系运算
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for(vp = &values[N_VALUES]; vp > &values[N_VALUES];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}