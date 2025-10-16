//Write a program to compare two strings using built-in function for N characters.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter 1st String : ");
    gets(str1);
    printf("Enter 2nd String : ");
    gets(str2);
    int n;
    printf("Enter Number Of Compare Character : ");
    scanf("%d",&n);
    printf("String Are : %s",(strncmp(str1,str2,n)==0 ? "Equal" : "Not Equal"));
}
