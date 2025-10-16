//Write a program to find sum of n numbers.
#include<stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter Number :");
    scanf("%d",&n);
    do
    {
        sum+=i;
        i++;
    }while(i<=n);
    printf("\n Sum=%d",sum);
}
