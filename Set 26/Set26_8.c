//Write a program to find the Reverse of a Number.
#include<stdio.h>
int getReverse(int a)
{
    int rev=0;
    while(a>0)
    {
        int rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    return rev;
}
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int rev=getReverse(a);
    printf("\nReverse = %d",rev);
}
