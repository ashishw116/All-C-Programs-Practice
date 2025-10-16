//Write a program to compare two strings using built in function.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter 1st String : ");
    gets(str1);
    printf("Enter 2nd String : ");
    gets(str2);
    printf("String Are : %s",(strcmp(str1,str2)==0 ? "Equal" : "Not Equal"));
}
