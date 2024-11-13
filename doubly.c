#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL,*tail=NULL;
void create(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_at_begin(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;    
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_end(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;    
    newnode->next=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void delete_at_begin(){
    struct node*temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void delete_at_end(){
    struct node*temp=tail->prev;
    tail=temp;
    temp=temp->next;
    tail->next=NULL;
    free(temp);
}
void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }

}
int main(){
    int choice;
    do{
        
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            create();
            break;
            case 2:
            insert_at_begin();
            break;
            case 3:
            insert_at_end();
            break;
            case 4:
            delete_at_begin();
            break;           
            case 5:
            delete_at_end();
            break;
            case 6:
            display();
            break;
            default:
            printf("Invalid choice");
        }


    }while(choice!=0);
}
