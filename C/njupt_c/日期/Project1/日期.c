/*��2_2���ڸ�ʽת��*/
#include <stdio.h>
int main()
{
	int year, month, day; /*��������ֱ����ꡢ�¡���*/
	printf("���ñ�׼���ڸ�ʽ����һ������(YYYY,MM,DD)��");
	scanf_s("%d,%d,%d", &year, &month, &day);
	printf("�й����ڸ�ʽ��%d��%d��%d��\n", year, month, day);
	printf("�������ڸ�ʽ��%d/%d/%d\n", month, day, year);
	printf("Ӣ�����ڸ�ʽ��%d/%d/%d\n", day, month, year);
	return 0;
}