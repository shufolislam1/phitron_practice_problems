#include<stdio.h>
int main(){
    int res,a,b;
    scanf("%d %d", &a, &b);
    res = a -b;
    if(res >= 0){
        printf("%d\n", res);
    }else
    {
        printf("0\n");
    }
    
    return 0;
}