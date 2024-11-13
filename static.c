#include<stdio.h>
void add(){
    static int c=0;
    c++;
    printf("%d",c);
}
int main(){
    add();
    add();
    
}