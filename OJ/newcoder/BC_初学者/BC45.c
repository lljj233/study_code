//https://www.nowcoder.com/practice/52c18a3b49a54fc98107fbdde1415f90?tpId=107&tags=&title=&difficulty=&judgeStatus=&rp=1&sourceUrl=&gioEnter=menu

#include <stdio.h>

int main() 
{
    int arr[3]={0};
    int i=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<3;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
    return 0;
}