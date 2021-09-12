#include<stdio.h>
#include<conio.h>

int binrysrch(int a[],int key,int low,int high)
{
    int mid;
    if(low>high)
    {
        return -1;
    }
    mid=(low+high)/2;
    if(key==a[mid])
        return mid;
    else if(key>a[mid])
        return binrysrch(a,key,mid+1,high);
    else
        return binrysrch(a,key,low,mid-1);
}

int main()
{
    int ar[20],key,len,pos,low=0,high;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&len);
    high=len-1;
    printf("Enter %d elements : ",len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    pos=binrysrch(ar,key,low,high);
    if(pos==-1)
        printf("Element not present in the array");
    else
        printf("The element %d is present at the position %d",key,pos+1);

    getch();
    return 0;
}