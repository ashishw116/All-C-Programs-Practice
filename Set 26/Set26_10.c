//Write a program to find number of years at which population of country gets doubled for given rate of growth.
#include<stdio.h>
int getYear(long int,float);
void main()
{
    long int population=10000000;
    float growth_rate=4.5;
    int y=getYear(population,growth_rate);
    printf("\nNumber of years = %d",y);
}
int getYear(long int pop,float r)
{
    long int double_pop=pop*2;
    int year=0;
    while(pop<=double_pop)
    {
            long int inc=(pop/100)*r;
            pop+=inc;
            year++;
    }
    return year;
}
