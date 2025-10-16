//Write a program to find the division of two long double numbers.( Hint - use Specifier : %Lf)
#include<stdio.h>
void main()
{
    long double num1,num2,division;
    printf("\nEnter 2 values=");
    scanf("%Lf%Lf",&num1,&num2);
    division=num1/num2;
    printf("Division=%Lf",division);
}
