//Write a program to find biggest of two numbers using ternary operator.
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 2 numbers = ");
    scanf("%d%d",&num1,&num2);
    int biggest=num1>num2?num1:num2;
    printf("Biggest Number is = %d",biggest);
}
