#include<stdio.h>
#include<conio.h>


int stack[10],top=1,size=10;
void Pop();
void Push();
void Peep();

int main()
{
	int opt=0;
	while(1)
	{
		
		printf("\nStack operation");
		printf("\n 1.Push");
		printf("\n 2.Pop");
		printf("\n 3.Peep");
		printf("\n 4.Exit");
		printf("\nEnter your option : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
			Push();
			break;
			case 2:
			Pop();
			break;
			case 3:
			Peep();
			break;
		    
			default:
				printf("\n invalid option");
			
			
		}
	}
	return 0;
}
void Push()
{
	int iteam;
	if(top==size)
	printf("\nStack is full");
	else
	{
		printf("Enter an item : ");
		scanf("%d",&iteam);
		stack[++top]=iteam;
		
	}
}
void Peep()
{
	int count = top;
	while(count>=0)
	{
		printf("\n %d",stack[count]);
		count--;
	}
	getch();
}
void Pop()
{
	if(top<0)
	printf("Stack Empty");
	else
	printf("\n Popped iteam is : %d",stack[top--]);
	getch();
}
