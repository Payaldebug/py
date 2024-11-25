#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear=-1;
int front=0;

void Enqueue()
{ 
    int id;
    if(rear==MAXSIZE-1)
    {
        printf("\nCustomer service is Full");
    }
    else{
        printf("\nEnter your customer id");
        scanf("%d",&id);
        rear++;
        queue[rear]=id;
    }
}

void Dequeue()
{
    int id;
    if(front>rear)
    {
        printf("\nCustomer Service is Empty");
    }
    else{
        id=queue[rear];
        printf("Delected customer%d\n",id);
        }
}

void Peek()
{
    if(front>rear)
    {
        printf("\nCustomer Service is Empty");
    }
    else{
        printf("View the most recent customer%d\n",queue[rear]);
    }
}

void Display()
{
    if(front>rear)
        {
        printf("\nCustomer Service is Empty");
    }
    else{
        int i;
          printf("All Customer are Show: ");
          for(i=front;i<rear;i++)
          printf("\n%d",queue[i]);
}
}
int main()
{   
    int choice;
    do{
        printf("\nWelcome to the Customer service!");
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display");
        printf("\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
           case 1:Enqueue();
           break;
           case 2:Dequeue();
           break;
           case 3:Peek();
           break;
           case 4:Display();
           break;
           default:
           printf("invalid choice!");
        }
    }while(choice!=5);
    return 0;
}