#include<stdio.h>
#define n 5
int rear=-1,front=-1;
int queue[n];
void enqueue(){
    int data;
    printf("Enter the data:");
    scanf("%d",&data);
    if(rear==n-1){
        printf("overflow");
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;

    }
}
void dequeue(){
    if(rear==-1){
        printf("underflow");
    }
    else{
        rear--;
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}
int main(){
    int choice;
    do{
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3: display();
            break;
            default:
            printf("invalid choice");
        }
    }
        while(choice!=0);
}