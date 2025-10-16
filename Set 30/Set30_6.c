//Write a program to find the distance between two points in Cartesian co-ordinate system using structures.
#include<stdio.h>
#include<math.h>
struct point
{
    int x,y;
};
void main()
{
    struct point p1,p2;
    printf("Enter 1st Point Co-ordinate : ");
    scanf("%d%d",&p1.x,&p1.y);
    printf("Enter 2nd Point Co-ordinate : ");
    scanf("%d%d",&p2.x,&p2.y);
    float dist=(float)sqrt((pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)));
    printf("Distance :%f",dist);
}
