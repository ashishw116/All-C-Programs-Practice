//Write a program to find the area of triangle when three points are given using structures.
#include<stdio.h>
#include<math.h>
struct point
{
    int x,y;
};
void main()
{
    struct point p1,p2,p3;
    printf("Enter 1st Point Co-ordinate : ");
    scanf("%d%d",&p1.x,&p1.y);
    printf("Enter 2nd Point Co-ordinate : ");
    scanf("%d%d",&p2.x,&p2.y);
    printf("Enter 3rd Point Co-ordinate : ");
    scanf("%d%d",&p3.x,&p3.y);
    float a=(float)sqrt((pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)));
    float b=(float)sqrt((pow((p1.x-p3.x),2)+pow((p1.y-p3.y),2)));
    float c=(float)sqrt((pow((p2.x-p3.x),2)+pow((p2.y-p3.y),2)));
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area : %f",area);
}
