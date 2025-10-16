//Write a program to check whether a given year is leap year or not.
#include<stdio.h>
void main()
{
    int year;
    printf("Enter Year=");
    scanf("%d",&year);
    switch(year%4)
    {
        case 0:
            printf("%d year is leap",year);
            break;
        default:
            printf("%d year is not leap",year);
            break;
    }
}
