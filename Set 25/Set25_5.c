//Write a program to accept an Upper case string and convert to lower case.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",&str);
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            int ascii=(int)str[i]+32;
            char lc=(char)ascii;
            str[i]=lc;
        }
    }
    printf("\n Lower case String  = %s",str);
}
