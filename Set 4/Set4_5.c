//Write program to find the Average of two short integers. ( Hint - use Specifier : %hd)
#include<stdio.h>
void main()
{
    short int num1,num2,average;
    printf("\nEnter 2 short intigers=");
    scanf("%hd%hd",&num1,&num2);
    average=(num1+num2)/2;
    printf("Average=%hd",average);
}
