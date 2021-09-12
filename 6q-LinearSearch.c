#include<stdio.h>
#include<conio.h>

int lnrsrh(int a[],int key,int n)
{
    if(n>=0)
    {
        if(a[n-1]==key)
        {
            return n;
        }
        else 
        {
            return lnrsrh(a,key,n-1);
        }
        n--;
    }
}

int main()
{
    int a[20],key,pos,n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter %d Elements into the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    pos=lnrsrh(a,key,n);
    if(pos!=0)
    {
        printf("The element %d is present at the position %d",key,pos);
    }
    else
    {
        printf("The element %d is not present in the array",key);
    }

    getch();
    return 0;
}