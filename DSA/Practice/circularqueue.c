#include<stdio.h>
#define MAXSIZE 10
int cq[MAXSIZE];
int rear=-1;
int front=-1;

void Insert()
{
    if((rear+1)%MAXSIZE==front)
    {
    printf("Queue is overflow");
   }
else
  {
    int n;
    printf("Enter an element");
    scanf("%d",&n);
    if(rear==-1 && front==-1)
    {
        rear=0;
        front=0;
    }
    else
    {
       rear= (rear+1)%MAXSIZE;
    }
       cq[rear]=n;
       printf("Inserted element:%d\n",n);
    
}}

void Display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("Queue is underflow");
    }
    else{
        printf("Element of Queue:");
        for(i=front;i!=rear;i=(i+1)%MAXSIZE)
        {
            printf("%5d",cq[i]);
        }
        printf("%5d",cq[i]);
        
    }
}

void Delete()
{
    int n;
    if(rear==-1 && front==-1)
    {
        printf("Queue is underflow");
    }
    else{
        n=cq[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%MAXSIZE;
            printf("Deleted Element of Queue:");
        }}}
        

int main()
{
    int choice;
    do{
        printf("Circular Queue Menu:");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d\n",&choice);
        switch(choice)
        {
            case 1:Insert();
            break;
            case 2:Delete();
            break;
            case 3:Display();
            break;
        }
    }while(choice!=4);
    return 0;
}