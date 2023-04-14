#include <stdio.h>

int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        int newSum = sum * (-1);
        printf("%d\n", newSum);
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}