//Write a program to check whether a given number is even or odd.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter Number=");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Entered Number is even");
    }
    else
    {
        printf("Entered Number is odd");
    }
}
