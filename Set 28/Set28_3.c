//Write a program to check a given matrix is Symmetric or not
#include<stdio.h>
int isSymmetric(int mat[3][3]);
void main()
{
    int mat[3][3]={{1,2,3},{2,3,4},{3,4,0}};
    printf("Matrix : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    if(isSymmetric(mat)==1)
    {
        printf("\nGiven Matrix is Symmetric.");
    }
    else
    {
        printf("\nGiven Matrix is Not Symmetric.");
    }
}
int isSymmetric(int mat[3][3])
{
    int flag=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i!=j && mat[i][j]!=mat[j][i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
    }
    return flag;
}
