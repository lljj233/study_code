#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;
const int Max_size = 100;
int Color_total;//颜色总数
int Color_choiced[Max_size];//已经选填颜色
int map[Max_size][Max_size];//邻接矩阵
int sum_choiced = 0;//方案个数
int point_total, edge_total;//节点数，边数
int Place_suit(int i);//检查是否合理的函数
void Re_search(int i);
int main()
{
	int i, j;
	cout << "请输入颜色总数:";
	cin >> Color_total;
	cout << "请输入节点数: ";
	cin >> point_total;
	cout << "请输入实际上连接边数:";
	cin >> edge_total;
	cout << "请输入有边相连的两个节点：" << endl;
	memset(map, 0, sizeof(map));
	for (int t = 1; t <= edge_total; t++) {
		cin >> i >> j;
		map[i][j] = map[j][i] = 1;
	}
	Re_search(1);
	if (sum_choiced == 0)
		cout << "不存在解" << endl;
	return 0;
}
void Re_search(int i)
{
	if (i > point_total) {//全部节点已经计算完时
		sum_choiced++;
		cout << "第" << sum_choiced << "种方案：" << endl;
		for (int j = 1; j <= point_total; j++)
			cout << Color_choiced[j] << " ";
		cout << endl;
		return;
	}
	else {
		for (int j = 1; j <= Color_total; j++)
		{
			Color_choiced[i] = j;
			if (Place_suit(i))//该位置可以着色该颜色
				Re_search(i + 1);
		}
	}
	return;
}
int Place_suit(int i)//检查是否合理的函数
{
	for (int j = 1; j <= i - 1; j++) {
		if (map[i][j] == 1 && Color_choiced[j] == Color_choiced[i])
			return 0;
	}
	return 1;
}

