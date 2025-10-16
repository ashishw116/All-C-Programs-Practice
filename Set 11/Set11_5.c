//Write a program to find the position of a point in Cartesian co-ordinate system on the axis using Switch statement.
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter position of a point in Cartesian co-ordinate x,y=");
    scanf("%d%d",&x,&y);
    switch(x>0 && y==0?1:x<0 && y==0?2:x==0 && y>0?3:x==0 && y<0?4:x==0 && y==0?5:6)
    {
        case 1:
            printf("\n Point Lies on +ve X axis");
            break;
        case 2:
            printf("\n Point Lies on -ve X axis");
            break;
        case 3:
            printf("\n Point Lies on +ve Y axis");
            break;
        case 4:
            printf("\n Point Lies on -ve Y axis");
            break;
        case 5:
            printf("\n Point Lies on origin");
            break;
        case 6:
            printf("\n Point does not Lies on any axis");
            break;
    }
}
