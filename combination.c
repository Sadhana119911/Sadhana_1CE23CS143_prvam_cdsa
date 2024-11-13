#include<stdio.h>
int find (int n,int a, int b){
    while(n!=0){
        if((n%10!=a)&&(n%10!=b)){
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int r;
    scanf("%d",&r);
    for(int i=1;i<r;i++){
        if(find(i,a,b)){
            printf("%d ",i);
        }
    }
}