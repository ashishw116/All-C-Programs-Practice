//Write a program to take sides of a triangle and check the type of the triangle.
#include<stdio.h>
void main()
{
    int side1,side2,side3;
    printf("Enter sides of a triangle=");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1)
    {
        printf("\n Triangle can be formed.");
        if(side1==side2 && side2==side3)
            printf("\n Equilateral triangle");
        else if(side1==side2 || side2==side3 || side1==side3)
            printf("\n Isosceles triangle");
        else
            printf("\n Scalene triangle");
    }
    else
    {
        printf("\n Triangle can not be formed.");
    }
}
