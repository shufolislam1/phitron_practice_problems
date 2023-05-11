#include<stdio.h>
#include<string.h>
int main(){
    char a[10001], b[10001];
    int cnt1=0,cnt2=0;
    scanf("%s %s", a,b);
    for(int i=0; a[i]!= '\0'; i++){
        cnt1++;
    }
    for(int i=0; b[i]!= '\0'; i++){
        cnt2++;
    }
    printf("%d %d\n", cnt1, cnt2);
    int k= strlen(a);
    for(int i=0; i<=strlen(b); i++){
        a[k] = b[i];
        k++;
    }
    printf("%s\n", a);
    for(int i=0; i<=20; i++){
        int temp=0;
        temp = a[0];
        a[0] =  b[0];
        b[0] = temp;        
    }
    int m = strlen(a);
    int y = strlen(b);
    int s = m-y;
    for(int i=0; i<s; i++){
        printf("%c", a[i]);
    }

    printf(" %s", b);
    return 0;
}