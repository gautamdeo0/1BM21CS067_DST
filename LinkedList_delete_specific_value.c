#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};

typedef struct node *NODE;

NODE getnode()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("Memory not allocated\n");
		return NULL;
	}
	
	return temp;
}

NODE insert_beg(int item,NODE first)
{
	NODE new;
	new=getnode();
	new->value=item;
	new->next=NULL;
	if(first==NULL)
	{
		return new;
	}
	else
	{
		new->next=first;
		first=new;
		return first;
	}
}

NODE delete_specific_value(NODE first,int key)
{
    NODE prev,curr;
    if(first==NULL)
    {
        printf("Cannot delete\n");
        return NULL;
    }
    curr=first;
    if(curr->value==key)
    {
        printf("Item deleted=%d",curr->value);
        first=first->next;
        free(curr);
        return first;
    }
    prev=NULL;
    curr=first;
    while(curr->value!=key && curr!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr->value==key)
    {
        prev->next=curr->next;
        printf("%d=Item deleted",curr->value);
        free(curr);
        return first;
    }
    if(curr==NULL)
    {
        printf("End of list reached and item not fount\n");
        return first;
    }
}

void display(NODE first)
{
	NODE temp;
	temp=first;
    printf("value stored in node=");
	while(temp!=NULL)
	{  
		printf("%d,",temp->value);
		temp=temp->next;
	}
}

void main()
{
	NODE first=NULL;
	int choice,pos,item;
	while(1)
	{
		printf("\n1.Insert_beg  \n2.delete_specific_value  \n3.Display\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter the value to be inserted at the begining\n");
			       scanf("%d",&item);
			       first=insert_beg(item,first);
			       break;

			case 2:printf("\nEnter the value to be deleted\n");
			       scanf("%d",&item);
			       first=delete_specific_value(first,item);
			       break;

			case 3:display(first);
			       break;	   	   
        
		    default:exit(0);
			        
		}
		
	}
}