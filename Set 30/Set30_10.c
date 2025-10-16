//Write a program to check whether 5 points are parallel to X- axis or not.
#include<stdio.h>
struct point
{
    int x,y;
};
void main()
{
    int n=5;
    struct point p[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter 1st Point Co-ordinate : ");
        scanf("%d%d",&p[i].x,&p[i].y);
    }
    int f=1;
    for(int i=0;i<n-1;i++)
    {
        if(p[i].y!=p[i+1].y)
        {
            f=0;
            break;
        }
    }
    if(f)
        printf("Points Are Parallel To X-axis");
    else
        printf("Points Are Not Parallel To X-axis");
}
