#include<stdio.h>
#include<conio.h>
int main()
{
    char *str1,*str2;
    int i;
    printf("Enter a String : ");
    scanf("%s",str2);
    for(i=0;*str2!='\0';i++,str1++,str2++)
    {
        *str1=*str2;
    }
    *str1='\0';
    str1=str1-i;
    printf("The Copied String is : %s",str1);
    return 0;
}

//this code didnt work in VS code!