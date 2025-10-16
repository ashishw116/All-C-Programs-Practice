//Write a program to accept a String and Reverse it.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",&str);
    int l=0;
    for(int i=0;str[i]!='\0';i++)
        l++;
    char rev[l+1];
    int k=l-1;
    for(int i=0;str[i]!='\0';i++)
        rev[i]=str[k--];
    printf("\n Reverse String  = %s",rev);
}
