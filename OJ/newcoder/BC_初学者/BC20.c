//https://www.nowcoder.com/practice/bcaf710fb58a44e1b678a890e6e90d7c?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d",(a%100+b%100)%100);
    return 0;
}