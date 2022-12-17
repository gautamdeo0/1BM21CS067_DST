#include<stdio.h>
#include<stdlib.h>

int count = 0;
struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* create_node(){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter integer\n");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    return temp;
}

void add_end(){
    if(head==NULL){
        head=create_node();
    }else{
        struct node* temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=create_node();
    }
}
void display(){
    if(head==NULL){
        printf("No elements have been inserted");
    }else{
    struct node* i=head;
    while (i->next!=NULL)
    {
        printf("%d  ",i->data);
        i=i->next;
    }
    printf("%d  ",i->data);
    printf("\n");
    }
}
void main(){
    int choice;
    printf("1:insert at end\n2.Display\n3.Exit\n");
    while (1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           add_end();
            count++;
            break;

        case 2:
            display();
            break;

        case 3:
            exit(0);

        default:printf("invalid choice");
            break;
        }

    }
}
