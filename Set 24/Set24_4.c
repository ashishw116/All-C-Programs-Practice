//Write a program to accept a String and count number of characters in it.
#include<stdio.h>
void main()
{
    char str[20];
    printf("Enter the string :");
    scanf("%[^\n]",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        count++;
    printf("\n  characters in string : %d",count);
}
