//Write a program to check a matrix is symmetric or not using function, where matrix is the data member of a structure.
#include<stdio.h>
struct dt
{
    int max[3][3];
};
typedef struct dt data;
int isSymmetric(data d);
void main()
{
    data d;
    printf("Enter Element of 3x3 matrix :");
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
                scanf("%d",&d.max[i][j]);
    }
    printf("\nMatrix is %ssymmetric",isSymmetric(d)==1?"":"Not ");
}
int isSymmetric(data d)
{
    int f=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i!=j)
            {
                if(d.max[i][j]!=d.max[j][i])
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
