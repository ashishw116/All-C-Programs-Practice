//Write a program to check whether a given year is leap or not.
#include<stdio.h>
void main()
{
    int year;
    printf("Enter Year=");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Entered Year is leap year);
    }
    else
    {
        printf("Entered Year is not leap year);
    }
}
