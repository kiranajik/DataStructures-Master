#include<stdio.h>
#include<conio.h>
#define MAX 100
int main()
{
    int arr[MAX],limit;
    int i,j,temp;
    printf("Enter total number of elements : ");
    scanf("%d",&limit);
    printf("Enter %d elements : ",limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<limit-1;i++)
    {
        for(j=0;j<(limit-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray elemts in ascending order : ");
    for(i=0;i<limit;i++)
     printf("%d   ",arr[i]);
    
    for(i=0;i<limit;i++)
    {
        for(j=0;j<(limit-i-1);j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    
    printf("\nArray elemts in descending order : ");
    for(i=0;i<limit;i++)
     printf("%d   ",arr[i]);

    getch();
    return 0;
    
} 
