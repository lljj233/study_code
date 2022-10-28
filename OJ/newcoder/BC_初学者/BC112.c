//https://www.nowcoder.com/practice/ce0b2eacd3d04647831358c2876e44ff?tpId=107&&tqId=33393&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main() 
{
    int n=0;
    scanf("%d",&n);
    long sum=0;
    int i=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%ld",sum);
}