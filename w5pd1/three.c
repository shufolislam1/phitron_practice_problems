#include <stdio.h>
void fun(int a)
{
    if (a <= 0)
        return;
    if (a == 1)
    {
        printf("1");
        return;
    }
    printf("%d ", a);
    fun(a - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}