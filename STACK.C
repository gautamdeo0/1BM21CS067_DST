#include <stdio.h>
#include <conio.h>
#define size 10
int stack[20],top=-1,x,i;
void push()
 { if (top==size)
     {
      printf("stack overflow");
     }
   else
     {
       printf("enter the number in stack");
       scanf("%d",&x) 
       top++;
       stack=[top];   
     }
   }
int pop()
  { int del;
     if(top==-1)
       {
         printf("stsck overflow");
       }  
     else
       { 
          del=stack[top];
          top--;
          return del;
       }
    }
void display()
   { if(top==-1)
      {
        printf("STACK is empty");
      }
     else
      {
        for(i=0;i<size;i++)
        printf("%d",stack[i])
      } 
    }
void main()
 { int choice,val;
    printf("choices are:");
    printf("1. push");
    printf("2. pop");
    printf("3. display");
    printf("4. exit");
    printf("enter the choice:");
    scanf("%d",&choice);
     while(1)
   {
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
               