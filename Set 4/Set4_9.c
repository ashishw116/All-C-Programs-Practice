//Write a program to add two long long int numbers. ( Hint use Specifier : %lld)
#include<stdio.h>
void main()
{
    long long int num1,num2,addition;
    printf("\nEnter 2 values=");
    scanf("%lld%lld",&num1,&num2);
    addition=num1+num2;
    printf("Addition=%lld",addition);
}
