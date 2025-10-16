//Write a program to check whether a given number is even or odd using ternary operator.
#include<stdio.h>
void main()
{
    int num1;
    printf("Enter number = ");
    scanf("%d",&num1);
    num1%2==0?printf("\nNumber is even"):printf("\nNumber is odd");
}
