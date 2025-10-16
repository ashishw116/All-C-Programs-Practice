//Write a program to find the sum up to a number.
#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n--;
    }
    printf("\nSum=%d",sum);
}
