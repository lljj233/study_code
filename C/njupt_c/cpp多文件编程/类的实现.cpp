#include <iostream>
#include "��Ķ���.h"
using namespace std;

Student::Student()
{
    cout << "������ѧ��ѧ�ţ�";
    cin >> No;
    cout << "������ѧ��������";
    cin >> Name;
    cout << "������ѧ���ɼ���";
    cin >> avgScore;
}

void Student::displayNo()
{
    cout << "�ҵ�ѧ���ǣ�" << No << endl;
}

void Student::displayName()
{
    cout << "�ҵ������ǣ�" << Name << endl;
}

void Student::displayavgScore()
{
    cout << "�ҵĳɼ��ǣ�" << avgScore << endl;
}
