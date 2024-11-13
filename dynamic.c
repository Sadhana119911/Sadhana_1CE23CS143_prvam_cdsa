#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *dynamic= (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&dynamic[i]);
    }
    int extra;
    scanf("%d",&extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));
    for(int i=n;i<(n+extra);i++){
        scanf("%d",dynamic[i]);
    }
    printf("after reallocation");
    for(int i=0;i<(n+extra);i++){
        printf("%d",dynamic[i]);
    }
    

}