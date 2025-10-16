//Write a program to find the position of a point in a Cartesian coordinate system using ternary operator.
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter Value of x,y = ");
    scanf("%d%d",&x,&y);
    x>0&&y>0?printf("\nPoint is in 1st Quadrant")
    :x<0&&y>0?printf("\nPoint is in 2nd Quadrant")
    :x<0&&y<0?printf("\nPoint is in 3rd Quadrant")
    :x>0&&y<0?printf("\nPoint is in 4th Quadrant")
    :x==0&&y>0?printf("\nPoint is in +Y axis")
    :x==0&&y<0?printf("\nPoint is in -Y axis")
    :x>0&&y==0?printf("\nPoint is in +X axis")
    :x<0&&y==0?printf("\nPoint is in -X axis"):printf("\nPoint is in Origin");
}
