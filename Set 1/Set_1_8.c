//Write a program to find the area of a Circle when radius is given.
#include<stdio.h>
#define pi 3.1415
void main()
{
    float area,radius;
    printf("\nEnter Radius: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("\nArea Of Circle is:%f",area);
}
