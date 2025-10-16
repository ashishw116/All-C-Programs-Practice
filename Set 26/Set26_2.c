//Write a program to find sum of two integers for function with arguments and without returning values.
#include<stdio.h>
void getSum(int a,int b)
{
    int sum=a+b;
    printf("\nSum = %d",sum);
}
void main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    getSum(a,b);
}
