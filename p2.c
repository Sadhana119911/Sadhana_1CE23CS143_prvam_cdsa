#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    int **ptr2=&ptr;
    printf("%d",**ptr2);
}
