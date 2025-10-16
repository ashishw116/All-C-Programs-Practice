//Write a program to count number of lower case, uppercase and Digits in a given String.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",&str);
    int uc=0,lc=0,dc=0;
        for(int i=0;str[i]!='\0';i++)
        {
            int ascii=(int)str[i];
            if(ascii>=65&&ascii<=90)
                uc++;
            else if(ascii>=97&&ascii<=122)
                lc++;
            else if(ascii>=48&&ascii<=57)
                dc++;
        }
    printf("\n UpperCase = %d \n LowerCase = %d \n Digit = %d",uc,lc,dc);
}
