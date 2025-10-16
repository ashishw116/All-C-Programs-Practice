//Write a program to display a String with left justification.
#include<stdio.h>
void main()
{
    char c[100];
    printf("Enter a string=");
    scanf("%s",&c);
    printf("String=%-10s",c);
}
