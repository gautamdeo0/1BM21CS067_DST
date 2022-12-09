#include<stdio.h>
# define MAX 3



void insert(int cqueue_arr[],int item,int *rear,int *front)
{
if((*front == 0 && *rear == MAX-1) || (*front == (*rear)+1))
{
printf("Queue Overflow n");
return;
}
if(*front == -1)
{
*front = 0;
*rear = 0;
}
else
{
if(*rear == MAX-1)
*rear = 0;
else
*rear = (*rear)+1;
}
cqueue_arr[*rear] = item ;
}


void deletion(int cqueue_arr[],int *rear,int *front)
{
if(*front == -1)
{
printf("Queue Underflown");
return ;
}
printf("Element deleted from queue is : %dn",cqueue_arr[*front]);
if(*front == *rear)
{
*front = -1;
*rear=-1;
}
else
{
if(*front == MAX-1)
*front = 0;
else
*front = (*front)+1;
}
}



void display(int cqueue_arr[],int *rear,int *front)
{
int front_pos = *front,rear_pos = *rear;
if(*front == -1)
{
 printf("\nQueue is emptyn");
 return;
}
printf("\nQueue elements :");
if( front_pos <= rear_pos )
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
else
{
while(front_pos <= MAX-1)
{
printf("\n%d ",cqueue_arr[front_pos]);
front_pos++;
}
front_pos = 0;
while(front_pos <= rear_pos)
{
printf("\n%d ",cqueue_arr[front_pos]);
front_pos++;
}
}
printf("n");
}



int main()
{
int choice,item;
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
do
{
printf("\n1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Quit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("Input the element for insertion in queue : ");
scanf("%d", &item);
insert(cqueue_arr,item,&rear,&front);
break;
case 2 :
deletion(cqueue_arr,&rear,&front);
break;
case 3:
display(cqueue_arr,&rear,&front);
break;
case 4:
break;
default:
printf("\nWrong choicen");
}
}while(choice!=4);
return 0;
}
