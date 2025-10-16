//Write a program to accept a string from the user and apply simple cipher technique and encrypt and Decrypt the same.
#include<stdio.h>
void main()
{
    char str[20];
    int key;
    printf("\n Enter string :");
    scanf("%s",&str);
    printf("\n Enter encrypt key :");
    scanf("%d",&key);
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]+(key%100);
    }
    printf("\n Encrypt String  = %s",str);
    printf("\n Enter string :");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]-(key%100);
    }
    printf("\n Enter Decrypt key :");
    scanf("%d",&key);
    printf("\n Decrypt String  = %s",str);
}
