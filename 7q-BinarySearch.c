#include<stdio.h>
#include<conio.h>

int binarys(int a[],int len,int key)
{
    int mid,max,min=0,step=0;
    max=len-1;
    while(max>=min)
    {
        mid=(max+min)/2;
        step++;
        if(a[mid]==key)
        {
            printf("The element found in %d steps",step);
            return mid;
        }
        else if(key>a[mid])
        {
            min=mid+1;
        }
        else
        {
            max=mid-1;
        }
    }
    return -1;
}

int main()
{
    int ar[20],key,len,i,pos;
    printf("\n\nEnter the number of elements for the array : ");
    scanf("%d",&len);
    printf("Enter %d numbers : ",len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    pos=binarys(ar,len,key);
    if(pos==-1)
    {
        printf("\nElement not Found");
    }
    else{
        printf("\nThe element %d is present in the position %d.",key,pos+1);
    }
    getch();
    return 0;
}