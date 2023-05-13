#include <stdio.h>
void fun(int a)
{
    for (int i = 1; i < a; i++)
    {
        printf("%d ", i);
    }

    printf("%d", a);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}