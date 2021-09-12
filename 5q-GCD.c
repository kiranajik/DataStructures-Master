#include<stdio.h>
#include<conio.h>
long gcd(long x,long y)
{
    if(y==0)
       return x;
    else
      return gcd(y,x%y);
}
int main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf("GCD of %d & %d is %d",x,y,gcd(x,y));
    getch();
    return 0;
}