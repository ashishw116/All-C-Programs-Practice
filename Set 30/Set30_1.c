//Write a program to copy a String to other string using built-in function for N characters.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter 1st String : ");
    gets(str1);
    printf("Enter 2nd String : ");
    gets(str2);
    printf("Before Copying str1 : %s\n",str1);
    printf("Before Copying str2 : %s\n",str2);
    int n;
    printf("Enter Number Of Copy Character : ");
    scanf("%d",&n);
    strncpy(str1,str2,n);
    printf("After Copying str1 : %s\n",str1);
    printf("After Copying str2 : %s\n",str2);
}
