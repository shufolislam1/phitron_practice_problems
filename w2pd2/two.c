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
    int ans = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == x)
        {
            ans = j;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}