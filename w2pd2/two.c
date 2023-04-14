#include <stdio.h>
int main()
{
    int n, x, flag = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == x)
        {
            flag = 1;
            break;
        }
        else
        {
            printf("-1\n");
        }
    }
    if (flag == 1)
    {
        // printf("%d\n", arr[j]);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}