//Write a program to find the area of triangle when three points are given.
#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("\nEnter value of x1,x2,x3,y1,y2,y3:");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    float a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    float b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    float c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    float semi_Perimeter=(a+b+c)/2;
    float area=sqrt(semi_Perimeter*((semi_Perimeter-a)*(semi_Perimeter-b)*(semi_Perimeter-c)));
    printf("\nArea :%f",area);
}
