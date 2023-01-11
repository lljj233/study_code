#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//一维数组习题

//1.sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，数组名表示整个数组，取出来的是整个数组的地址
//3.除此之外，所有的数组名都是数组首元素的地址
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//a+0是数组第一个元素的地址，为4或8
//	printf("%d\n", sizeof(*a));//*a是数组首元素，计算的是数组首元素的大小，单位是字节
//	printf("%d\n", sizeof(a + 1));//a+1是数组第二个元素的地址，为4或8
//	printf("%d\n", sizeof(a[1]));//a[1]是数组第二个元素，计算的是第二个元素的字节大小
//	printf("%d\n", sizeof(&a));//&a是整个数组的地址，为4或8
//	printf("%d\n", sizeof(*&a));//&a是整个数组，*&a是取出整个数组，为16
//	printf("%d\n", sizeof(&a + 1));//&a是整个数组，&a + 1是跳过整个数组，指向数组后的空间地址，为4或8
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址，为4或8
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0] + 1是数组第二个元素的地址，为4或8
//	return 0;
//}



//字符数组习题

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//每个字符一个字节，为6
//	printf("%d\n", sizeof(arr + 0));//arr+0是数组首元素地址，为4或7
//	printf("%d\n", sizeof(*arr));//*arr是数组首元素，计算的是数组首元素的大小，为1
//	printf("%d\n", sizeof(arr[1]));//arr[1]是数组第二个元素，为1
//	printf("%d\n", sizeof(&arr));//&arr是取出整个数组的地址，为4或8
//	printf("%d\n", sizeof(&arr + 1));//&arr是取出整个数组的地址，&arr + 1是跳过整个数组，指向数组后的空间地址，为4或8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1)是数组第二个元素的地址，为4或8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值，因为要找'\0'的位置
//	printf("%d\n", strlen(arr + 0));//随机值，同上
//	printf("%d\n", strlen(*arr));//*arr是数组首元素，相当于strlen('a')或strlen(97),非法访问
//	printf("%d\n", strlen(arr[1]));//arr[1]是数组第二个元素，同上，非法访问
//	printf("%d\n", strlen(&arr));//随机值，&arr是取出数组地址，同第一个
//	printf("%d\n", strlen(&arr + 1));//随机值，&arr + 1是跳过整个数组的地址，非法访问
//	printf("%d\n", strlen(&arr[0] + 1));//随机值，&arr[0] + 1是数组第二个元素地址，依旧要找'\0'的位置
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//数组大小为7，[a,b,c,d,e,f,\0]
//	printf("%d\n", sizeof(arr));//求的是整个数组的字节大小，为7
//	printf("%d\n", sizeof(arr + 0));//arr + 0是数组首元素地址，计算的是数组首元素地址的字节大小，为4或8
//	printf("%d\n", sizeof(*arr));//*arr是数组首元素首元素，计算的是数组首元素的字节大小，为1
//	printf("%d\n", sizeof(arr[1]));//arr[1]是数组第二个元素，同上，为1
//	printf("%d\n", sizeof(&arr));//&arr取出的是数组的地址，为4或8
//	printf("%d\n", sizeof(&arr + 1));//&arr是取出整个数组的地址，&arr + 1是跳过整个数组，指向数组后的空间地址，为4或8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址，为4或8
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//arr是数组首元素的地址，strlen从首元素地址开始统计\0之前出现的字符个数，为6
//	printf("%d\n", strlen(arr + 0));//arr + 0是数组首元素的地址,同上
//	printf("%d\n", strlen(*arr));//*arr是数组首元素，相当于strlen('a')或strlen(97),非法访问
//	printf("%d\n", strlen(arr[1]));//类似同上
//	printf("%d\n", strlen(&arr));//&arr为数组的地址，也为数组首元素地址同第一个，为6
//	printf("%d\n", strlen(&arr + 1));//随机值，&arr + 1跳过整个数组，跳过的包括\0
//	printf("%d\n", strlen(&arr[0] + 1));//(&arr[0] + 1是数组第二个元素的地址，strlen从第二个元素地址开始统计\0之前出现的字符个数，为5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//p是指针变量，大小为4或8字节
//	printf("%d\n", sizeof(p + 1));//p+1是第二个元素的地址，为4或8
//	printf("%d\n", sizeof(*p));//p存放的是首元素的地址，*p就是首元素，计算的是首元素的字节，为1
//	printf("%d\n", sizeof(p[0]));//p[0]就是*(p+0),也就是*p，同上
//	printf("%d\n", sizeof(&p));//&p是存放p的地址，是二级指针，为4或8
//	printf("%d\n", sizeof(&p + 1));//&p + 1是跳过p变量后的地址，为4或8
//	printf("%d\n", sizeof(&p[0] + 1));//&p[0]是数组首元素地址，&p[0] + 1是第二个元素的地址，为4或8
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//p存放的是a的地址，从a往后直到\0,也就是求字符串长度，为6
//	printf("%d\n", strlen(p + 1));//p+1是b的地址，从b往后直到\0，为5
//	printf("%d\n", strlen(*p));//*p就是字符a，非法访问
//	printf("%d\n", strlen(p[0]));//同上，非法访问
//	printf("%d\n", strlen(&p));//随机值，&p是p这个指针变量的起始地址，取决于\0的位置
//	printf("%d\n", strlen(&p + 1));//随机值，&p+1是跳过p变量的地址，类似同上
//	printf("%d\n", strlen(&p[0] + 1)); //&p[0] + 1是b的地址，从b往后直到\0，为5
//	return 0;
//}