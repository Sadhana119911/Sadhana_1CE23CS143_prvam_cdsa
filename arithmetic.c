#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d",ptr);
}