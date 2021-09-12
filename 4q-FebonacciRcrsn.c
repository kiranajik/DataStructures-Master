#include<stdio.h>
#include<conio.h>
 int fibonacci(int n)
 {
   if(n==0)
     return 0;
   else if(n==1)
     return 1;
   else
     return fibonacci(n-1)+fibonacci(n-2);
 }
 int main()
 {
  int N,i;
  printf("Enter a value for N : ");
  scanf("%d",&N);
  printf("First %d terms of the fibonacci series are : \n",N);
  for(i=0;i<N;i++)
   printf("  %d",fibonacci(i));
  getch();
  return 0;
 }