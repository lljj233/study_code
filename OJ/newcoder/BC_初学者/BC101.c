//https://www.nowcoder.com/practice/60d96b08e1cb42e38629d54e37eac008?tpId=107&&tqId=33382&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    float e = 0;
    int i = 0;
    while (i < 5)
    {
        scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
        printf("%f ", a);
        printf("%f ", b);
        printf("%f ", c);
        printf("%f ", d);
        printf("%f ", e);
        printf("%f ", a+b+c+d+e);
        i++;
    }
    return 0;
}
