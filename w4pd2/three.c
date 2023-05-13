#include <stdio.h>
#include <limits.h>
void maxMin(int arr[], int size)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d %d", min, max);
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
    maxMin(arr, n);
    return 0;
}