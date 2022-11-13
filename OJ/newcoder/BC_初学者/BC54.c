//https://www.nowcoder.com/practice/13aeae34f8ed4697960f7cfc80f9f7f6?tpId=107&&tqId=33335&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int func(int y,int m)
{
    if((y%4==0&&y%100!=0)||((y%400)==0))
    {
        if(m==2)
            return 29;
        else if(m==4||m==6||m==9||m==11)
            return 30;
        else
            return 31;
    }
    else
    {
        if(m==2)
            return 28;
        else if(m==4||m==6||m==9||m==11)
            return 30;
        else
            return 31;
    }
}
int main() 
{
    int year=0;
    int month=0;
    while(scanf("%d %d",&year,&month)!=EOF)
    {
        int ret=func(year, month);
        printf("%d\n",ret);
    }
}