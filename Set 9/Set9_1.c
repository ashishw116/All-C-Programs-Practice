//Write a program to find division of two numbers for non zero denominator.
#include<stdio.h>
void main()
{
    float no1,no2,division;
    printf("Enter 2 Numbers= ");
    scanf("%f%f",&no1,&no2);
    if(no2!=0)
    {
        division=no1/no2;
        printf("Division is =%f",division);
    }
    else
    {
        printf("Enter Valid Numbers, Denominator is can't be zero.");
    }
}
