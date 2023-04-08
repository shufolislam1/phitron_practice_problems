#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int res = a/1000;
    if(res%2 == 0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}