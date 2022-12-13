//https://www.nowcoder.com/practice/0b62b8dca766459ca3935a499a737d9f?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>

int main()
 {
    int score=0;
    scanf("%d",&score);
    if(score>=10&&score<=30)
    {
        printf("Danger++");
    }
    else if(score>=4&&score<=9)
    {
        printf("Danger");
    }
    else if(score>=0&&score<=3)
    {
        printf("Good");
    }
    else
    {
        printf("error!");
    }
}