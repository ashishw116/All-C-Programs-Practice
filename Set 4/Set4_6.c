//Write a program to find the difference of two Unsigned short int numbers. ( Hint - use Specifier : %hu)
#include<stdio.h>
void main()
{
    unsigned short int num1,num2,difference;
    printf("\nEnter 2 short intigers=");
    scanf("%hu%hu",&num1,&num2);
    difference=num1-num2;
    printf("Difference=%hu",difference);
}
