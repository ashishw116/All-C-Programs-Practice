//Write a program to find sum of two integers for function with arguments and with returning values.
#include<stdio.h>
int getSum(int a,int b)
{
    int sum=a+b;
    return sum;
}
void main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    int sum=getSum(a,b);
    printf("\nSum = %d",sum);
}
