//Write a program to find sum up to n..
#include<stdio.h>
void main()
{
    int n,sum=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("\nSum = %d",sum);
}
