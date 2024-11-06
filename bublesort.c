#include <stdio.h>
void bubble(int arr[], int n)
{
    int i,j, temp;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j + 1])
             {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
             }
        }
    }
}

int main()
{
    int n, i;
    printf("Enter your size of array: ");
    scanf("%d", &n);
    printf("Enter your array Element: ");
     int arr[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble(arr, n);
    printf("the sorted array is:");
    for(i = 0; i <n; i++)
    {
       printf("\n%d", arr[i]);
    }
    return 0;
}
