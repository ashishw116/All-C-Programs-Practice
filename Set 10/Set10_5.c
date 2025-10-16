//Write a program to check two points are in a Cartesian co-ordinate system are parallel to x – Axis or not, if Parallel then Find the distance between them.
#include<stdio.h>
void main()
{
    int x1,x2,y1,y2;
    printf("Enter value of x1,y1,x2,y2 =");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(y1==y2)
    {
        printf("\n Points are parallel to x – Axis.");
        printf("\n Distance is =%d",y1);
    }
    else
    {
        printf("\n Points are not parallel to x – Axis.");
    }
}
