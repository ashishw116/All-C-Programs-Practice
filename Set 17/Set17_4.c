//Write a program to find the factorial of a number.
#include<stdio.h>
void main()
{
    int n,fact=1,i=1;
    printf("Enter Number :");
    scanf("%d",&n);
    do
    {
        fact*=i;
        i++;
    }while(i<=n);
    printf("\n fact=%d",fact);
}
