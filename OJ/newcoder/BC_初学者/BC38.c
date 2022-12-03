//https://www.nowcoder.com/practice/c178e3f5cc4641dfbc8b020ae79e2b71?tpId=107&tags=&title=&difficulty=&judgeStatus=&rp=1&sourceUrl=&gioEnter=menu

#include <stdio.h>
int main()
{
    int i = 10000;
    for (i = 10000; i < 99999; i++)
    {
        int some = i;
        int sum = 0;
        int w = 10;
        while (w <= 10000)
        {
            sum += (some / w) * (some % w);
            w *= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}