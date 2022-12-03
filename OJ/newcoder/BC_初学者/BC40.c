//https://www.nowcoder.com/practice/45a30e3ef51040ed8a7674984d6d1553?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>

int main()
{
    char arr[30]={0};
    gets(arr);
    char* p=arr;
    int count1=0;
    int count2=0;
    while(*p!='0')
    {
        if(*p=='A')
        {
            count1++;
        }
        else
        {
            count2++;
        }
        p++;
    }
    if(count1>count2)
        printf("A");
    else if(count1<count2)
        printf("B");
    else
        printf("E");
    return 0;
}