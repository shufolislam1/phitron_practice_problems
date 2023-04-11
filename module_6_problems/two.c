#include<stdio.h>
int main(){
    int ev=0,od=0,po=0,ne=0,n,x,i;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &x);
        if(x%2 == 0){
            ev++;
        }
        if(x%2 != 0)
        {
            od++;
        }
        if(x> 0)
        {
            po++;
        }
        if(x< 0)
        {
            ne++;
        }

        
    }
        printf("Even: %d\n", ev);
        printf("Odd: %d\n", od);
        printf("Positive: %d\n", po);
        printf("Negative: %d\n", ne);
    return 0;
}