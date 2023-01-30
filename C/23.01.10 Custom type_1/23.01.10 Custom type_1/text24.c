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




//位段的内存分配
//VS2019上验证：位段的内存开辟和使用
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//由低到高
//	printf("%d", sizeof(s));
//
//	return 0;
//}



//枚举
//枚举顾名思义就是一一列举。
//把可能的取值一一列举。
//enum Day//星期
//{
//	Mon,//0  默认递增
//	Tues,//1
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun//6
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Color s1;
//	int s2;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

////以上定义的 enum Day ， enum Sex ， enum Color 都是枚举类型。
////{}中的内容是枚举类型的可能取值，也叫 枚举常量 。
////这些可能取值都是有值的，默认从0开始，一次递增1，当然在定义的时候也可以赋初值。

//enum Color//颜色
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};



//枚举的优点
//1. 增加代码的可读性和可维护性
//2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
//3. 防止了命名污染（封装）
//4. 便于调试
//5. 使用方便，一次可以定义多个常量



//枚举的注意事项
//enum Color//颜色
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//int main()
//{
//	enum Color a = GREEN;
//	//int a = RED;只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
//	printf("%d\n", a);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(enum Color));
//	return 0;
//}



//联合(共用体)
//联合也是一种特殊的自定义类型
//这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）。
//union UN
//{
//	//c和i不能同时使用
//	char c;
//	int i;
//};
//int main()
//{
//	union UN un;
//	printf("%d\n", sizeof(un));
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	return 0;
//}



//联合大小的计算
//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
//union UN
//{
//	char c[5];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union UN));
//	return 0;
//}



//通过联合判断是大端存储还是小端存储
//int main()
//{
//	int a = 1;//0x 00 00 00 01
//	//低----------------->高
//	//01 00 00 00 - 小端存储
//	//00 00 00 01 - 大端存储
//	union UN
//	{
//		char c;
//		int i;
//	}un;
//	un.i = 1;
//	if (un.c == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n ");
//	}
//	return 0;
//}

