//Write a program to find division of two integers using type casting to float.
#include<stdio.h>
void main()
{
    int number1,number2;
    float division;
    printf("\n Enter 2 values: ");
    scanf("%d%d",&number1,&number2);
    division=(float)number1/number2;
    printf("\nDivision is: %f",division);
}
