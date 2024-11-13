#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    scanf("%d",&element);
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=element;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}