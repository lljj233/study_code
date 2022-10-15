#include<stdio.h>
int main()
{
	int a = 5, b;
	b = a--;
	int* x, * y;
	x = &a;
	y = &b;
	printf("a=%d,b=%d\n", a, b);
	printf("x=%p,y=%p\n", &a,&b);
	printf("*x=%d,*y=%d\n", *x, *y);
	return 0;
}