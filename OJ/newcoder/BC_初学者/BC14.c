//https://www.nowcoder.com/practice/4a4a9dd1edb6453ba4a0432319200743?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>

int main() 
{
    int data=0;
    scanf("%d",&data);
    printf("year=%04d\n",data/10000);
    printf("month=%02d\n",data%10000/100);
    printf("date=%02d\n",data%100);
    return 0;
}