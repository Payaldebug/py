#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*address;
}; struct node*start,*temp,*new1,*next,*prev;
void create()
{
    int n;
    char ch;
    printf("Enter the element");
    scanf("%d",&n);
    start=(struct node*)malloc(sizeof(struct node));
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
     void insert_beg()
     {
        if(start==NULL)
        {
            printf("List is empty");
        }
        else{
               int n;
               printf("Enter the element to be inserted in begining");
               scanf("%d",&n);
               new1=(struct node*)malloc(sizeof(struct node));
               new1->data=n;
               new1->address=NULL;
               new1->address=start;
               start=new1;
            }
     }
     void insert_last()
     {
        if(start==NULL)
        {
            printf("List is empty");
        }
        else{
             int n;
             printf("Enter the element to be inserted in last");
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
     void insert_middle()
     {
       if(start==NULL)
        {
            printf("List is empty");
        }
        else{
             int n,pos,i=1;
             printf("Enter the element to be inserted in middle");
             scanf("%d",&n);
             new1=(struct node*)malloc(sizeof(struct node));
             new1->data=n;
             new1->address=NULL;
             printf("Enter the node position");
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
     void delete_beg()
     {
        if(start==NULL)
        {
            printf("List is empty");
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
            printf("List is empty");
        }
        else{
              temp=start;
              while(temp->address=NULL)
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
            printf("List is empty");
        }
        else{
            int pos,i=1;
            printf("Enter the node position");
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
     void display()
     {
        if(start==NULL)
        {
            printf("List is empty");
        }
        else{
            temp=start;
            while(temp!=NULL)
            {
                printf("%d",temp->data);
                temp=temp->address;
            }
        }
     }
int main()
{
    int choice;
    do{
        printf("\nLinked list menu:");
        printf("\n1.Create\n2.Insert_beg\n3.Insert_middle\n4.Insert_last\n5.Delete_beg\n6.Delete_middle\n7.Delete_last\n8.Display");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: create();
        break;
        case 2:insert_beg();
         break;
         case 3:insert_middle();
        break;
         case 4:insert_last();
         break;
        case 5:delete_beg();
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