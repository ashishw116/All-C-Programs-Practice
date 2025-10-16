//Write a program which accept population of a country in crores and also growth rate per year and also accept number of years to predict the growth rate. And print the predicted population for every year till the given number of years.
#include<stdio.h>
void main()
{
    long int population,year,c=1;
    float growth_rate;
    printf("Enter population, year, growth : ");
    scanf("%ld%d%f",&population,&year,&growth_rate);
    while(c<=year)
    {
        long int growth=(long)(population/100)*growth_rate;
        population+=growth;
        printf("\n Predicted Population after %d year :%ld",c,population);
        c++;
    }
}
