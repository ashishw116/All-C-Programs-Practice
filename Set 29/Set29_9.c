//Write a program to convert a sting to Lowercase and uppercase using built-in function.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    printf("Enter 1st String : ");
    gets(str1);
    printf("Lower Case : %s\n",strlwr(str1));
    printf("Upper Case : %s\n",strupr(str1));
}
