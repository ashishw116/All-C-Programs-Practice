//Write a program to find the sum of digits of a number.
#include<stdio.h>
int getSum(int a)
{
    int sum=0;
    while(a>0)
    {
        int rem=a%10;
        a/=10;
        sum+=rem;
    }
    return sum;
}
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int sum=getSum(a);
    printf("\nSum = %d",sum);
}

