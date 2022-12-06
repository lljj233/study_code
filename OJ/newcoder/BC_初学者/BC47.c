//https://www.nowcoder.com/practice/91a588dd4cd244bfa616f17603ec123c?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=


#include <stdio.h>

int main()
{
    char ch=0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='\n')
            continue;
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            printf("%c is an alphabet.\n",ch);
        else
            printf("%c is not an alphabet.\n",ch);
    }
    return 0;
}