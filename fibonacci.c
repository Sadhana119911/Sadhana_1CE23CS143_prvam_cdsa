#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int r;
    scanf("%d",&r);
    printf("%d",n1);
    printf("%d",n2);
    for(int i=3;i<r;i++){
        int n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
        
    }
    
}