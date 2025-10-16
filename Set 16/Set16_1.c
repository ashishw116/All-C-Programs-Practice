//Write a program to find factorial of a number.
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n>1)
    {
        fact*=n--;
    }
    printf("\nFact=%d",fact);
}
