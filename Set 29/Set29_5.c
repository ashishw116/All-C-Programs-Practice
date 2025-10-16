//Write a program to find the length of a string using built-in function.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter A String : ");
    gets(str);
    printf("String Length is : %d",strlen(str));
}
