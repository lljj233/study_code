#pragma once
class Student
{
public:
    Student();
    void displayNo();
    void displayName();
    void displayavgScore();
private:
    char No[11];
    char Name[8];
    float avgScore;
};