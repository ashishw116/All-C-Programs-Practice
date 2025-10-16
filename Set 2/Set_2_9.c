//Write a program to find the area of triangle when three sides are given.
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    printf("\nEnter value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    float semi_Perimeter=(a+b+c)/2;
    float area=sqrt(semi_Perimeter*((semi_Perimeter-a)*(semi_Perimeter-b)*(semi_Perimeter-c)));
    printf("\nArea :%f",area);
}
