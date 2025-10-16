//Write a program to find sum of two integers for function without arguments and with returning values.
#include<stdio.h>
int getSum()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    return sum;
}
void main()
{
    int sum=getSum();
    printf("\nSum = %d",sum);
}

