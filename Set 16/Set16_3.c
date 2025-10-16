//Write a program to find the sum of digits of given number.
#include<stdio.h>
void main()
{
    int sum=0,n;
    printf("Enter Number=");
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("\nSum=%d",sum);
}
