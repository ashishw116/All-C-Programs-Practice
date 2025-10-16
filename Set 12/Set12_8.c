//Write a program to find the factorial of a number.
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        fact*=i;
    printf("\nFactorial = %d",fact);
}
