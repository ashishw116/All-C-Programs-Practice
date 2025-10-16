//Write a program to take a character and increase its value by n and print the obtained character.
#include<stdio.h>
void main()
{
    char c;
    int n;
    printf("Enter Character And No of Increase=");
    scanf("%c%d",&c,&n);
    c+=n;
    printf("\nObtained character is=%c",c);
}
