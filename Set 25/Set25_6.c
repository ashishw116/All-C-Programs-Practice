//Write a program to accept a Lower case string and convert it into upper case.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",&str);
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            int ascii=(int)str[i]-32;
            char lc=(char)ascii;
            str[i]=lc;
        }
    }
    printf("\n Upper case String  = %s",str);
}
