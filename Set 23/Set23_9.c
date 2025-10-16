//Write a program to print Boundary elements  of a matrix.
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\n Enter rows and columns of matrix : ");
    scanf("%d%d",&rows,&columns);
        int m[rows][columns];
        printf("\n Enter the elements of matrix :");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                scanf("%d",&m[i][j]);
        }
        printf("\n Entered elements of matrix :\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                printf("%d",m[i][j]);
            printf("\n");
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                (i==0 || j==0 || j==rows-1||i==rows-1)?printf(" %d",m[i][j]):printf("  ");
            }
            printf("\n");
        }

}
