#include <stdio.h>
void fun(int a)
{
    if (a <= 0)
        return;
    fun(a - 1);
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}