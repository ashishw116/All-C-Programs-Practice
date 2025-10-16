//Write a program to find subtraction of two unsigned long long int numbers. ( Hint use Specifier : %llu)
#include<stdio.h>
void main()
{
    unsigned long long int num1,num2,subtraction;
    printf("\nEnter 2 values=");
    scanf("%llu%llu",&num1,&num2);
    subtraction=num1-num2;
    printf("Subtraction=%llu",subtraction);
}
