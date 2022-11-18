//https://www.nowcoder.com/practice/44d2d63103664913bc243d3836b4f341?tpId=107&tags=&title=&difficulty=&judgeStatus=&rp=1&sourceUrl=&gioEnter=menu

#include<stdio.h>
int main()
{
	char ch = 0;
	scanf("%c", &ch);
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("YES");
	}
	else
		printf("NO");
}