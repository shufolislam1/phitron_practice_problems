#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int max = (a>b?a:a>c?a:b>c?b:c);
    int min = (a<b?a:a<c?a:b<c?b:c);
    printf("%d %d", min,max);
    return 0;
}