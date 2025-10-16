//Write a Program to accepts a square matrix and print the trace and normal of the matrix
#include<stdio.h>
#include<math.h>
void main()
{
    int rows,columns;
    printf("\n Enter rows and columns of matrix :");
    scanf("%d%d",&rows,&columns);
    if(rows==columns)
    {
        int m[rows][columns];
        printf("\n Enter the elements of matrix :");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                scanf("%d",&m[i][j]);
            }
        }
        printf("\n Entered elements of matrix :\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                printf(" %d",m[i][j]);
            }
            printf("\n ");
        }
        int trace=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(i==j)
                    trace+=m[i][j];
            }
            printf("\n ");
        }
        printf("\n Trace of matrix : %d",trace);
        int sqr=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(i==j)
                    sqr+=m[i][j]*m[i][j];

            }
        }
        float normal=sqrt(sqr);
        printf("\n Normal of matrix : %d",normal);
    }
    else
        printf("\n This is Not Square Matrix");
}
