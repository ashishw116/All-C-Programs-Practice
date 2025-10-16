//Write a program to find the simple interest. ( SI= PTR/100).
#include<stdio.h>
void main()
{
    int principle,time;
    float simple_interest,rate;
    printf("\nEnter principle,time,rate:");
    scanf("%d%d%f",&principle,&time,&rate);
    simple_interest=(principle*time*rate)/100;
    printf("\nSimple_interest :%f",simple_interest);
}
