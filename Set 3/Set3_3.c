//Write a program which takes the number of days as input & convert it into years, months, weeks, & days (hint: consider 365 days for a year, 30 days for a month ).
#include<stdio.h>
void main()
{
    int days,years,months,weeks;
    printf("Enter Days=");
    scanf("%d",&days);
    years=days/365;
    int rem1=days%365;
    months=rem1/30;
    days=rem1%30;
    printf("\n Years=%d Months=%d Days=%d",years,months,days);
}
