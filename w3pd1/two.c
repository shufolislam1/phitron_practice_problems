#include <stdio.h>
int main()
{
    int i, k, r;
    printf(" Enter a number: \n ");
    scanf("%d", &r);
    for (i = 1; i <= r; ++i)
    {
        for (k = i; k <= r; k++)
        {
            printf(" ");
        }
        for (k = 1; k<= i; k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}