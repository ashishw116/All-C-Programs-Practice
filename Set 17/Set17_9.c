//Write a program to illustrate the use of goto Statement
#include<stdio.h>
void main()
{
    int i=1;
    start:
        printf("\nHiii I am ashish %d",i);
        i++;
    if(i<=10)
        goto start;
}
