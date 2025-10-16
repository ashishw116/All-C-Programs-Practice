//Write a program to find the sum following series 1! + 2! +3! + …. +n!
#include<stdio.h>
void main()
{
    int n,fno=1,sno=0,sum,fact=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
        {
            fact*=j;
        }
        printf("\t fact=%d",fact);
        sum+=fact;
    }
}
