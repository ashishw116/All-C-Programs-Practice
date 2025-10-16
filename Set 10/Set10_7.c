//Write a program to find the position of a point in a Cartesian coordinate system.
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter value of x,y=");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
        printf("\nPoint is in 1st Quadrant");
    else if(x<0&&y>0)
        printf("\nPoint is in 2nd Quadrant");
    else if(x<0&&y<0)
        printf("\nPoint is in 3rd Quadrant");
    else if(x>0&&y<0)
        printf("\nPoint is in 4th Quadrant");
    else if(x==0&&y>0)
        printf("\nPoint is in +Y axis");
    else if(x==0&&y<0)
        printf("\nPoint is in -Y axis");
    else if(x>0&&y==0)
        printf("\nPoint is in +X axis");
    else if(x<0&&y==0)
        printf("\nPoint is in -X axis");
    else
        printf("\nPoint is in Origin");
}
