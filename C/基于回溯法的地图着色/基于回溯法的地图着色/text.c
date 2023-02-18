#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;
const int Max_size = 100;
int Color_total;//��ɫ����
int Color_choiced[Max_size];//�Ѿ�ѡ����ɫ
int map[Max_size][Max_size];//�ڽӾ���
int sum_choiced = 0;//��������
int point_total, edge_total;//�ڵ���������
int Place_suit(int i);//����Ƿ����ĺ���
void Re_search(int i);
int main()
{
	int i, j;
	cout << "��������ɫ����:";
	cin >> Color_total;
	cout << "������ڵ���: ";
	cin >> point_total;
	cout << "������ʵ�������ӱ���:";
	cin >> edge_total;
	cout << "�������б������������ڵ㣺" << endl;
	memset(map, 0, sizeof(map));
	for (int t = 1; t <= edge_total; t++) {
		cin >> i >> j;
		map[i][j] = map[j][i] = 1;
	}
	Re_search(1);
	if (sum_choiced == 0)
		cout << "�����ڽ�" << endl;
	return 0;
}
void Re_search(int i)
{
	if (i > point_total) {//ȫ���ڵ��Ѿ�������ʱ
		sum_choiced++;
		cout << "��" << sum_choiced << "�ַ�����" << endl;
		for (int j = 1; j <= point_total; j++)
			cout << Color_choiced[j] << " ";
		cout << endl;
		return;
	}
	else {
		for (int j = 1; j <= Color_total; j++)
		{
			Color_choiced[i] = j;
			if (Place_suit(i))//��λ�ÿ�����ɫ����ɫ
				Re_search(i + 1);
		}
	}
	return;
}
int Place_suit(int i)//����Ƿ����ĺ���
{
	for (int j = 1; j <= i - 1; j++) {
		if (map[i][j] == 1 && Color_choiced[j] == Color_choiced[i])
			return 0;
	}
	return 1;
}

