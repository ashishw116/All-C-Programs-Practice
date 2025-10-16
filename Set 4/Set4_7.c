//Write a program to find the Product of two double numbers.( Hint - use Specifier : %lf)
#include<stdio.h>
void main()
{
    double num1,num2,product;
    printf("\nEnter 2 values=");
    scanf("%lf%lf",&num1,&num2);
    product=num1*num2;
    printf("Product=%lf",product);
}
