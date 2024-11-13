#include<stdio.h> 
struct student{
    int rollno;
    float marks;
}s;
int main(){
    s.rollno=05;
    s.marks=97.5;
    printf("%d\n",s.rollno);
    printf("%f\n",s.marks);
}
