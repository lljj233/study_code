#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>


//结构体

//匿名结构体 - 直接在结构体后创建变量
//struct
//{
//	char name[20];
//	int age;
//}x;

//struct
//{
//	int a;
//	char b;
//	double c;
//}x;
//struct
//{
//	int a;
//	char b;
//	double c;
//}* p;
//int main()
//{
//	p = &x;
//	//编译器会把上面的两个声明当成完全不同的两个类型。
//	//所以是非法的。
//	return 0;
//}



//结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};



//结构体的初始化
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 10,20 };
//struct Point p2 = { 20,30 };
//
//struct s
//{
//	int num;
//	char ch;
//	struct Point p;
//	float d;
//};
//
//int main()
//{
//	struct Point p3 = { 40.49 };
//
//	struct s s1 = { 38,'d',{38,58},3.14f };
//	struct s s2 = { .p = {4,5}, .ch = 'o', .num = 49, .d = 3.39f };//乱序初始化
//
//	printf("%d %c %d %f\n", s1.num, s1.ch, s1.p.x, s1.d);
//	printf("%d %c %d %f\n", s2.num, s2.ch, s2.p.x, s2.d);
//
//	return 0;
//}



//结构体内存对齐 - 计算结构体大小
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。(VS中默认的值为8)
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//
//	//判断结构体成员的偏移量
//	/*printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));*/
//	return 0;
//}



//修改默认对齐数 - #pragma pack()
//#pragma pack(2)//设置默认对齐数为4
//struct A
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()//恢复默认对齐数
//int main()
//{
//	printf("%d", sizeof(struct A));
//	return 0;
//}



//位段

//位段的声明和结构是类似的，有两个不同：
//1.位段的成员必须是 int、unsigned int 或signed int。
//2.位段的成员名后边有一个冒号和一个数字。
//struct A
//{
//	int _a : 2;//表示该变量(_a)只占2byte
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d", sizeof(struct A));
//	return 0;
//}

