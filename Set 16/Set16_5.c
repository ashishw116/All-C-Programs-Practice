//Write a program to find reverse of a number.
#include<stdio.h>
void main()
{
    int rev=0,n;
    printf("Enter Number=");
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\nReverse=%d",rev);
}
