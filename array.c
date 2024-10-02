#include<stdio.h>
int arr[5];
int n;
void insert_beg()
{
    int data,i;
    printf("Enter the element to be inserted in begining");
    scanf("%d",&data);
    for(i=n;i>0;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=data;
    n++;
}
void insert_end()
{
    int data;
    printf("Enter the element to be inserted in end");
    scanf("%d",&data);
    arr[n]=data;
    n++;
}
void insert_pos()
{
   int data,pos,i;
    printf("\nEnter the element to be inserted in pos");
    scanf("%d",&data);
    printf("Enter the position");
    scanf("%d",&pos);
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return;}
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
      arr[pos]=data;
      n++;
}
void display()
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("\n%d",arr[i]);  
    }
    printf("\n");
}
int main()
{
    int i,choice;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array is :");
  for(i=0; i<n;i++)
  {
    printf("\n%d",arr[i]);
  }
  do{
  printf("\n1.Insertion at begining\n2.Insertion of end\n3.Insertion of position\n4.Display");
  printf("\nEnter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:insert_beg();
     break;
     case 2:insert_end();
     break;
     case 3:insert_pos();
     break;
     case 4:display();
     break;
     default:
     printf("Invalid choice");
  }
}while(choice!=5);
return 0;
}