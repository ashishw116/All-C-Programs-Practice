//Write a program to check whether a given number is positive or negative.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter Number=");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Entered Number is positive=%d",num);
    }
    else
    {
        printf("Entered Number is negative=%d",num);
    }
}
