#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("It is a prime Number");
    }
    else{
        printf("It is not a Prime Number");
    }
}