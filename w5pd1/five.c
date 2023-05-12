#include <stdio.h>
int fun(int arr[], int size)
{
    if(size<0){
        return;
    }
    // int sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += arr[i];
    // }
    int l = fun(arr, size-1);
    return l + arr[size-1];
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
    int m = sizeof(arr) / sizeof(arr[0]);
    int res = fun(arr, m);
    printf("%d", res);
    return 0;
}