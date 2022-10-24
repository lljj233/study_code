#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct STU
//{
//	char name[20];
//	char sex[5];
//	int age;
//};
//
//void pri(struct STU* p)
//{
//	printf("%s %s %d\n",(*p).name,(*p).sex,(*p).age);
//	printf("%s %s %d\n",p->name,p->sex,p->age);
//
//}
//
//int main()
//{
//	struct STU s1 = {"zhangsan","男",18};
//	pri(&s1);
//
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.sex);
//	printf("%d\n", s1.age);
//
//	return 0;
//}



//struct worker
//{
//	char name[20];
//	int age;
//	double incomes;
//};
//
//void pri(struct worker* p)
//{
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).age);
//	printf("%.3lf\n", (*p).incomes);
//}
//
//int main()
//{
//	struct worker p1 = { "张三",29,2022.2 };
//	pri(&p1);
//	return 0;
//}