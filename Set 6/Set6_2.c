//Write a program to find biggest of three numbers using ternary operator.
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers = ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int biggest=num1>num2&&num1>num3?num1:num2>num3?num2:num3;
    printf("Biggest Number is = %d",biggest);
}
