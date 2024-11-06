#include<stdio.h>
void selectionsort(int arr[],int n)
{
    int i,j,temp,min_value;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           int min_value=i;
           if(arr[j]<arr[min_value])
           {
              temp=arr[j];
              arr[j]=arr[min_value];
              arr[min_value]=temp;

           }
        }
    }
}

int main()
{
   int n,i;
   printf("Enter the size of array");
   scanf("%d",&n);
   printf("Enter the elements of array");
   int arr[n];
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   selectionsort(arr,n);
   printf("Sorted array is:");
      for(i=0;i<n;i++)
      {
        printf("\n%d",arr[i]);
      }
   
   return 0;
}