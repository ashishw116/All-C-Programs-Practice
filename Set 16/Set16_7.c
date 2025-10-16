//Write a program which accepts principal amount and rate of interest per year as input and. print the amount at the end of the each year till principal amount get doubled.
#include<stdio.h>
void main()
{
    long int principal_amount,year=1;
    float roi;
    printf("Enter principal amount and rate of interest : ");
    scanf("%ld%f",&principal_amount,&roi);
    long int value=principal_amount*2;
    while(principal_amount<=value)
    {
        long int interest=(long)(principal_amount/100)*roi;
        principal_amount+=interest;
        printf("\n Predicted Population after %d year :%ld",year,principal_amount);
        year++;
    }
}
