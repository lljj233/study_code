/*例2_2日期格式转换*/
#include <stdio.h>
int main()
{
	int year, month, day; /*定义变量分别存放年、月、日*/
	printf("请用标准日期格式输入一个日期(YYYY,MM,DD)：");
	scanf_s("%d,%d,%d", &year, &month, &day);
	printf("中国日期格式：%d年%d月%d日\n", year, month, day);
	printf("美国日期格式：%d/%d/%d\n", month, day, year);
	printf("英国日期格式：%d/%d/%d\n", day, month, year);
	return 0;
}