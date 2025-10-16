//Write a program to check whether a given number is divisible by 149 or not.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter Number=");
    scanf("%d",&num);
    if(num%149==0)
    {
        printf("Entered Number is divisible by 149");
    }
    else
    {
        printf("Entered Number is not divisible by 149");
    }
}
