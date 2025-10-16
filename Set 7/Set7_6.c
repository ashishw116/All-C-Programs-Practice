//Write a program to accept a String with white space using %s format Specifier.
#include<stdio.h>
void main()
{
    char c[100];
    printf("Enter A String=");
    scanf("%[^\n]",&c);
    printf("String =%s",c);
}
