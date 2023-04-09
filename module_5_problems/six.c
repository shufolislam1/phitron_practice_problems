#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // for  small
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= c && b <= a)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }
    // for big
    if (a >= b && a >= c)
    {
        printf("%d\n", a);
    }
    else if (b >= c && b >= a)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d", c);
    }
    // important note: eibhave kora jabe only if choto theke boro input dea hoi.
    // int max = (a >= b ? a : a >= c ? a
    //                    : b >= c   ? b
    //                              : c);
    // int min = (a <= b ? a : a <= c ? a
    //                    : b <= c   ? b
    //                              : c);
    // printf("%d %d", min, max);
    return 0;
}