#include<stdio.h>
int main(){
    int x,r1,r2;
    scanf("%d", &x);
    r1 = x/10;
    r2 = x%10;
    if(r1%r2 == 0 || r2%r1 == 0){
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
    return 0;
}