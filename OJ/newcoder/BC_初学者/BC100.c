//https://www.nowcoder.com/practice/a9e943b0dab142759807d0cfb6863897?tpId=107&&tqId=33381&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0; j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n && j < m)
        for (; j < m; j++)
            printf("%d ", arr2[j]);
    else
        for (; i < n; i++)
            printf("%d ", arr1[i]);
    return 0;
}