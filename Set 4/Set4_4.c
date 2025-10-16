//Write program to find the addition of two unsigned integers.( Hint - use Specifier : %u)
#include<stdio.h>
void main()
{
    unsigned int num1,num2,addition;
    printf("\nEnter 2 unsigned intigers=");
    scanf("%u%u",&num1,&num2);
    addition=num1+num2;
    printf("Addition=%u",addition);
}
