#include<stdio.h>
int main(){
    int *ptr=NULL;
    int a=5;
    ptr=&a;
    printf("%d",*ptr);
}