//Write a program which takes the number of seconds as input & convert it into hours, minutes and seconds.
#include<stdio.h>
void main()
{
    int seconds,hours,minutes;
    printf("Enter Seconds=");
    scanf("%d",&seconds);
    hours=seconds/3600;
    int rem1=seconds%3600;
    minutes=rem1/60;
    seconds=rem1%60;
    printf("Hours=%d Minutes=%d Seconds=%d",hours,minutes,seconds);
}
