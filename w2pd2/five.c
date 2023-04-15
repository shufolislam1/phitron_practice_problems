#include<stdio.h>
int main(){
    int n, lowest = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>lowest){
            lowest = i;
        }
    }
    printf("%d", lowest);

    return 0;
}