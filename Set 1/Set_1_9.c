//Write a program to find the circumference of a circle when radius is given.
#include<stdio.h>
#define pi 3.1415
void main()
{
    float area,radius;
    printf("\nEnter Radius: ");
    scanf("%f",&radius);
    area=2*pi*radius;
    printf("\nCircumference Of Circle is:%f",area);
}
