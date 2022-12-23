//https://www.nowcoder.com/practice/1654083e09d2432aa24b151d36309155?tpId=107&tqId=33407&rp=1&ru=/ta/beginner-programmers-v1&qru=/ta/beginner-programmers-v1&difficulty=&judgeStatus=&tags=/question-ranking

#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[10][10]={0};
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
     for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
           sum+=arr[i][j];
        }
        int average=sum/3;
        if(average<60)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}