#include <iostream>
#include "类的定义.h"
using namespace std;

Student::Student()
{
    cout << "请输入学生学号：";
    cin >> No;
    cout << "请输入学生姓名：";
    cin >> Name;
    cout << "请输入学生成绩：";
    cin >> avgScore;
}

void Student::displayNo()
{
    cout << "我的学号是：" << No << endl;
}

void Student::displayName()
{
    cout << "我的姓名是：" << Name << endl;
}

void Student::displayavgScore()
{
    cout << "我的成绩是：" << avgScore << endl;
}
