#include <stdio.h>
#include <conio.h>
#define size 5
int stack[10],top=-1,x,i;
void push()
 { if (top==size)
     {
      printf("stack overflow");
     }
   else
     {
       printf("enter the number in stack=");
       scanf("%d",&x); 
       top++;
       stack[top]=x;   
     }
   }
int pop()
  { int del;
     if(top==-1)
       {
         printf("stack overflow");
       }  
     else
       { 
          del=stack[top];
          top--;
          return del;
       }
    }
void display()
   { int i;
       if(top==-1)
      {
        printf("STACK is empty\n");
      }
     else
      {
        for(i=0;i<size;i++)
        printf("%d\n",stack[i]);
      } 
    }
void main()
 { int choice,val;
    while(1)
   {
    printf("choices are:\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. display\n");
    printf("4. exit\n");
    printf("enter the choice: ");
    scanf("%d",&choice);
    
     switch(choice)
        {   case 1: push();
                    break;
          
            case 2: val=pop();
                    break;

            case 3: display();
                    break;

            case 4: exit(0);
                    break;
   
            default: printf("enter the correct option");
                     break;
        }
  }
}
            
