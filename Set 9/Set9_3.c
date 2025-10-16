//Write a program to find biggest of two numbers.
#include<stdio.h>
void main()
{
    int no1,no2,big;
    printf("Enter 2 Numbers=");
    scanf("%d%d",&no1,&no2);
    if(no1>no2)
    {
        big=no1;
    }
    else
    {
        big=no2;
    }
    printf("Biggest Number Is=%d",big);
}
