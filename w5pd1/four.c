#include <stdio.h>
int fun(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
            printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr, n);
    return 0;
}