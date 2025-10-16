//Write a program to find sum of two integers for function without arguments and without returning values.
#include<stdio.h>
void getSum()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("\nSum = %d",sum);
}
void main()
{
    getSum();
}

