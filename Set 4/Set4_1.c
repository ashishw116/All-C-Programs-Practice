//Write a program to take a character and print its ASCII character and Vice versa.
#include<stdio.h>
void main()
{
    char c;
    int ascii;
    printf("Enter Character=");
    scanf("%c",&c);
    ascii=(int)c;
    printf("\nASCII of %c is %d",c,ascii);
    printf("\nEnter ASCII=");
    scanf("%d",&ascii);
    c=(char)ascii;
    printf("\nASCII of %d is %c",ascii,c);
}
