//https://www.nowcoder.com/practice/95eb723a3e854376a7eb6d116cc7d875?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>

int main() 
{
    int a,b;
    scanf("a=%d,b=%d",&a,&b);
    int tem=a;
    a=b;
    b=tem;
    printf("a=%d,b=%d",a,b);
    return 0;
}