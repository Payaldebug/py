#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *address;
}; struct node *start=NULL,*temp,*new1,*prev,*next;

void create()
{
    char ch;
    int n;
    printf("\nEnter your element");
    scanf(" %d",&n);
    start =(struct node*) malloc(sizeof(struct node));
    start->data=n;
    start->address=NULL;
    temp=start;
    printf("want to continue");
    scanf(" %s",&ch);
    while(ch=='y'||ch=='Y')
    {
      printf("Enter the next element");
      scanf("%d",&n);
      new1=(struct node*)malloc(sizeof(struct node));
      new1->data=n;
      new1->address=NULL;
      temp->address=new1;
      temp=temp->address;
      printf("want to continue");
      scanf(" %s",&ch);
    }
}
void display()
{
    if(start==NULL)
    {
    printf("List not create");
    }
    else{
        temp=start;
        while(temp!=NULL)
        {
            printf("\t%d",temp->data);
            temp=temp->address;
        }
    }
}
void insert_first()
{
    if(start==NULL)
    {
     printf("List not found");
    }
    else{
          int n;
          printf("Enter the element to be insert in first");
          scanf("%d",&n);
          new1=(struct node*)malloc(sizeof(struct node));
          new1->data=n;
          new1->address=NULL;
          new1->address=start;
          start=new1;
        }
}
void insert_middle()
{
    if(start==NULL)
    {
    printf("List not found");
    }
    else{
          int n,pos,i=1;
          printf("Enter the element to be insert in middle");
          scanf("%d",&n);
          new1=(struct node*)malloc(sizeof(struct node));
          new1->data=n;
          new1->address=NULL;
          printf("Enter the position");
          scanf("%d",&pos);
          next=start;
          while(i<pos)
          {
            prev=next;
            next=next->address;
            i++;
          }
          prev->address=new1;
          new1->address=next;
          }
}
void insert_last()
{
    if(start==NULL)
    {
    printf("List not found");
    }
    else{
          int n;
          printf("Enter the element to be insert in last");
          scanf("%d",&n);
          new1=(struct node*)malloc(sizeof(struct node));
          new1->data=n;
          new1->address=NULL;
          temp=start; 
          while(temp->address!=NULL)
          {
            temp=temp->address;
          }
          temp->address=new1;
        }
}
void delete_first()
{
   if(start==NULL)
   {
   printf("List not found");
   }
   else{
          temp=start;
          start=start->address;
          printf("Deleted node is %d",temp->data);
          free(temp);
   }
}
void delete_last()
{
  if(start==NULL)
   {
   printf("List not found");
   }
   else{
          temp=start;
          while(temp->address!=NULL)
          {
            prev=temp;
            temp=temp->address;
          }
          prev->address=NULL;
          printf("Deleted node is %d",temp->data);
          free(temp);
        }
}
void delete_middle()
{
  if(start==NULL)
   {
   printf("List not found");
   }
    else{
          int i=1,pos;
          printf("Enter the position of node");
          scanf("%d",&pos);
          temp=start;
          while(i<pos)
          {
            prev=temp;
            temp=temp->address;
            i++;
          } 
          next=temp->address;
          prev->address=next;
          printf("Deleted node is %d",temp->data);
          free(temp);
    }
}
int main()
{
    int choice;
    do{
        printf("\nLinked List Menu:");
        printf("\n1.create\n2.insert from first\n3.insert from middle\n4.insert from last\n5.delete from first\n6.delete from middle\n7.delete from last\n8.display");
        printf("\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1: create();
        break;
        case 2:insert_first();
        break;
        case 3:insert_middle();
        break;
        case 4:insert_last();
        break;
        case 5:delete_first();
        break;
        case 6:delete_middle();
        break;
        case 7:delete_last();
        break;
        case 8:display();
        break;
        default:
        printf("invalid choice");
    }
}while(choice!=9);
    return 0;
}