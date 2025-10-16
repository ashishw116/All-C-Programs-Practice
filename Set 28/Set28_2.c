//Write a program to get the Transpose of a Matrix for the passed matrix from a function.
#include<stdio.h>
int* getPriDia(int mat[3][3]);
void main()
{
    int mat[3][3]={{2,3,4},{8,7,6},{1,9,0}};
    printf("Matrix : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    int *priDia=getPriDia(mat);
    printf("Principal Diagonal : \n");
    for(int i=0;i<3;i++)
    {
            printf("%d ",priDia[i]);
    }
}
int* getPriDia(int mat[3][3])
{
    static int priDia[3];
    int ind=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            if(i==j)
            {
                priDia[ind++]=mat[i][j];
            }
    }
    return priDia;
}
