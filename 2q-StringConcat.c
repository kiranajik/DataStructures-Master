#include<stdio.h>
#include<conio.h>
#include<string.h>
void concatinate(char *s1,char *s2)
{
    while(*s1)
        s1++;
    while(*s2)
    {
        *s1=*s2;
        *s1++;
        *s2++;
    }
    *s1='\0';
}
int main()
{
    char str1[30],str2[30];
    int i=0;
    printf("Enter a String 1 : ");
    gets(str1);
    printf("Enter a String 2 : ");
    gets(str2);
    concatinate(str1,str2);
    printf("The Concatinated String is : %s",str1);
    return 0;
}