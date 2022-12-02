#include<stdio.h>
#include<stdlib.h>

#define qsize 3

void insert(int *r ,int item, int qu[])
{
    if(*r == qsize - 1)
    {
        printf("queue is overflow\n");
    }
    else
    {
        (*r)++;
        qu[*r] = item;
    }
}

int delete(int *r, int *f ,int qu[])
{
    int item_deleted ;
   
    if(*f > *r)
    {
        printf("queue is underflow\n");
    }
    else
    {
      //  item_deleted = qu[*f++];
        return qu[(*f)++];
    }
}

void display(int *r, int *f, int qu[])
{
    int i;
   
    if(*f > *r)
    {
        printf("queue is empty\n");
    }
    else
    {
        for( i = *f ; i <= *r ;i++ )
        {
            printf("%d\n" ,qu[i]);
        }
    }
}

int main()
{
    int qu[qsize];
    int r = -1, f = 0;
    int n, item , del_value;
   
    while(1)
    {
        printf("choose the following : \n 1. inset element \n 2. delete element \n 3. display elements \n 4. Exit\n ");
        scanf("%d", &n);
       
        switch(n)
        {
            case 1 : printf("enter the element \n");
                    scanf("%d",&item);
                    insert(&r , item, qu);
                    break;
                   
            case 2 : del_value = delete(&r, &f, qu);
                    printf("deleted value is : %d \n", del_value);
                    break ;
                   
            case 3 : display(&r , &f, qu);
                    break;
           
           
            default : exit(0);
        }

       
    }
   
   
}