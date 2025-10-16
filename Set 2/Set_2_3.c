//Write a program to convert Fahrenheit temperature to Celsius [ Formula : (F − 32) × 5/9].
#include<stdio.h>
void main()
{
    float fahrenheit,celsius;
    printf("\nEnter Fahrenheit temperature:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("\nCelsius :%f",celsius);
}
