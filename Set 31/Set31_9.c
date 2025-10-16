//Write a program to check a matrix is unit or not using function, where matrix is the data member of a structure.
#include<stdio.h>
struct dt
{
    int max[3][3];
};
typedef struct dt data;
int isUnitMatrix(data d);
void main()
{
    data d;
    printf("Enter Element of 3x3 matrix :");
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
                scanf("%d",&d.max[i][j]);
    }
    printf("\nMatrix is %sUnit Matrix",isUnitMatrix(d)==1?"":"Not ");
}
int isUnitMatrix(data d)
{
    int f=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(d.max[i][j]!=1)
                {
                    f=0;
                    break;
                }
            }
            else
            {
                if(d.max[i][j]!=0)
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==0)
            break;
    }
    return f;
}
