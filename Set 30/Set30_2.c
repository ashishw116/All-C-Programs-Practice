//Write a program to concatenate two strings using built-in function for N characters.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter 1st String : ");
    gets(str1);
    printf("Enter 2nd String : ");
    gets(str2);
    printf("Before concatenate str1 : %s\n",str1);
    printf("Before concatenate str2 : %s\n",str2);
    int n;
    printf("Enter Number Of Copy Character : ");
    scanf("%d",&n);
    strncat(str1,str2,n);
    printf("After concatenate str1 : %s\n",str1);
    printf("After concatenate str2 : %s\n",str2);
}
