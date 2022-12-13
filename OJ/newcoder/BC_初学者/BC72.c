//https://www.nowcoder.com/practice/b0e489a749f448e2b37f26ef56a76e58?tpId=107&tqId=33353&rp=1&ru=/ta/beginner-programmers-v1&qru=/ta/beginner-programmers-v1&difficulty=&judgeStatus=&tags=/question-ranking

#include <stdio.h>

int main() 
{
    double arr[5]={0};
    int i=0;
    double sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }
    double average=sum/5.0;
    printf("%.2lf",average);
}