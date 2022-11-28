//https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        printf("%d",n%10);
        n/=10;
    }
    return 0;
}