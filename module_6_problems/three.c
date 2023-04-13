#include <stdio.h>
int main()
{
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x != 1999)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
            break;
        }
    }
    // if(x == 1999)
    return 0;
}