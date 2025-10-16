//Write a Program to get the average of 3 Integers.
#include<stdio.h>
float getAverage(int,int,int);
float getAverage(int a,int b,int c)
{
    float avg=(float)(a+b+c)/3;
    return avg;
}
void main()
{
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    float avg=getAverage(a,b,c);
    printf("\nAverage = %f",avg);
}
