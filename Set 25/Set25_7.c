//Write a program to accept a String and convert the Upper case characters into lowercase and vice versa
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
        else if(str[i]>=97&&str[i]<=122)
        {
            int ascii=(int)str[i]-32;
            char lc=(char)ascii;
            str[i]=lc;
        }
    }
    printf("\n String  = %s",str);
}
