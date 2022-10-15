#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "类的定义.h"
using namespace std;

Student::Student()
{
    cout << "学号：";
    cin >> No;
    cout << "姓名：";
    cin >> Name;
    cout << "平均成绩：";
    cin >> avgScore;
}

void Student::displayNo()
{
    cout << "学号：" << No << endl;
}

void Student::displayName()
{
    cout << "姓名：" << Name << endl;
}

void Student::displayavgScore()
{
    cout << "平均成绩：" << avgScore << endl;
}