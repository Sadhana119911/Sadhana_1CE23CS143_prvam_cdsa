#include<stdio.h>
int a=4;
void add(){
    printf("%d",a);
}
void sub(){
    a++;
    printf("%d",a);
}
int main(){
    add();
    sub();
    add();
}