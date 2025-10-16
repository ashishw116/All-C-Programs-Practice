//Write a program to check given two points of a line are parallel to X axis or not in a Cartesian Co ordinate System using ternary operator.
#include<stdio.h>
void main()
{
    int x1,y1,x2,y2;
    printf("Enter Co-ordinate Two Points x1,y1 and x2,y2 = ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    x1==x2?printf("\nThe Line is Parallel To Y axis"):printf("\nThe Line is Not Parallel To Y axis");
}
