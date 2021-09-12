#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,count,temp,arr[20];
    printf("Enter the number of elements in the array : ");
    scanf("%d",&count);
    printf("Enter %d elements : ",count);
    for(i=0;i<count;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<count;i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    printf("Order of sorted elements : ");
    for(i=0;i<count;i++)
        printf("%d   ",arr[i]);
    getch();
    return 0;
}