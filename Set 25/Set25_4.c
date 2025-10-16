//Write a program to concatenate two strings.
#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    printf("\n Enter 1 string :");
    scanf("%s",str1);
    printf("\n Enter 2 string :");
    scanf("%s",str2);
    int size1=0,size2=0;
    for(int i=0;str1[i]!='\0';i++)
            size1++;
    for(int i=0;str2[i]!='\0';i++)
            size2++;
    char str3[size1+size2];
    int pos=0;
    for(int i=0;str1[i]!='\0';i++)
            str3[pos++]=str1[i];
    for(int i=0;str2[i]!='\0';i++)
            str3[pos++]=str2[i];
    printf("\n Entered String = %s",str3);
}
