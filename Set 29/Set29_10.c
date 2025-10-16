//Write a program to search a given character in a String using built-in function.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],c;
    printf("Enter 1st String : ");
    gets(str1);
    printf("Enter Character to Search : ");
    c=getchar();
    printf("Character Is %s\n",strchr(str1,c)!=NULL?"Present":"Not Present");
}
