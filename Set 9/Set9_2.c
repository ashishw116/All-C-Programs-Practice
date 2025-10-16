//Write a program to swap two numbers if they are even.
#include<stdio.h>
void main()
{
    int no1,no2;
    printf("Enter 2 Numbers=");
    scanf("%d%d",&no1,&no2);
    if(no1%2==0 & no2%2==0)
    {
        printf("\nNumbers are even so it will swaped.");
        printf("\nNumbers Before Swapping 1st Number=%d, 2nd Number=%d",no1,no2);
        no1=no1+no2;
        no2=no1-no2;
        no1=no1-no2;
        printf("\nNumbers After Swapping 1st Number=%d, 2nd Number=%d",no1,no2);
    }
    else
    {
        printf("\nNumbers are't even so it will not swap.");
        printf("\n1st Number=%d, 2nd Number=%d",no1,no2);
    }
}
