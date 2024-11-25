#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 10
int arr[MAXSIZE];
int n;
char* str[MAXSIZE];

void int_to_str()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        str[i]=(char*)malloc(12*sizeof(char));
         if(str[i]==NULL)
         {
            printf("memory not allocated\n");
            return;
         }
         sprintf(str[i],"%d",arr[i]);
    }

       for(i=0;i<n-1;i++)
       {
          for(j=i+1;j<n;j++)
           {
            char temp1[20],temp2[20];
            sprintf(temp1,"%s%s",str[i],str[j]);
            sprintf(temp2,"%s%s",str[j],str[i]);
             if(strcmp(temp1,temp2)<0)
             {
                char*temp=str[i];
                str[i]=str[j];
                str[j]=temp;
             }

        }
    }
}
void display()
{
    int i;
    printf("\nstring is: ");
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
}
int main()
{
    int i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int_to_str();
    display();
    return 0;
}