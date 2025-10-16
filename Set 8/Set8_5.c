//Write a program to display a String with right justification.
#include<stdio.h>
void main()
{
    char c[100];
    printf("Enter a string=");
    scanf("%s",&c);
    printf("String=%10.6s",c);
}
