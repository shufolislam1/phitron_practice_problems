#include<stdio.h>
int main(){
    // o.p= d.p/(1- discount percentage);
    int a,b;
    double c;
    scanf("%d %d", &a,&b);
    c = b/(1-(a/100.00));
    printf("%0.2lf", c);
    return 0;
}