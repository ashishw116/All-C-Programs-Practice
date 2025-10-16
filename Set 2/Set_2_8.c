//Write a program to find the distance between the two points in Cartesian coordinate system.
#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    printf("\nEnter value of x1,x2,y1,y2:");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    float distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("\n Distance:%f",distance);
}
