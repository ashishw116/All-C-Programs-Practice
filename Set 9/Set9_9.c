//Write a program to check whether a given number is divisible by 6 and 9 or not.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter Number=");
    scanf("%d",&num);
    if(num%6==0 && num%9==0)
    {
        printf("Entered Number is divisible by 6 and 9");
    }
    else
    {
        printf("Entered Number is not divisible by 6 and 9");
    }
}
