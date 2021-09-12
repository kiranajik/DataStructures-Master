#include<stdio.h>
#include<conio.h>

int bc(int n,int k)
{
 if(k>n)
   return 0;
 if(k==0||k==n)
   return 1;
 return bc(n-1,k-1)+bc(n-1,k);
}
int main()
{
 int n,k;
 printf("Enter the value for n & k : ");
 scanf("%d%d",&n,&k);
 printf("Value of C(%d,%d) is %d",n,k,bc(n,k));
 getch();
 return 0;
}