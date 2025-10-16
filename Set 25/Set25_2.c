//Write a program to count number of words in a given text.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",&str);
    int wc=1;
        for(int i=0;str[i]!='\0';i++)
        {
            int ascii=(int)str[i];
            if(ascii==32)
                wc++;
        }
    printf("\n Word Count = %d",wc);
}
