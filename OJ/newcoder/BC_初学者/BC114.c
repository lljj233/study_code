//https://www.nowcoder.com/practice/0f855c7642b74cccb3c2366bb7732d2a?tpId=107&&tqId=33395&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main() 
{
    int n=0;
    scanf("%d",&n);
    int min=0;
    if(n>12)
    {
        int i=n/12;
        min=4*i+2;
    }
    else
    {
        min=2;
    }
    printf("%d",min);
    return 0;
}