#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int num=1;
    while(num<=n){
        if(n%num==0){
            printf("%d",num);
        }
        num++;
    }
    return 0;    
    
}