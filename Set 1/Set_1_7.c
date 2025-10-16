//Write a program to find the area of triangle when base and heights are given.
#include<stdio.h>
void main()
{
    int base,height;
    float area;
    printf("\nEnter Base And Height: ");
    scanf("%d%d",&base,&height);
    area=(float)0.5*base*height;
    printf("\nArea Of triangle is:%f",area);
}
