//Write a program to accept a Matrix from the user and print the elements along with their respective positions.
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\nEnter Rows And Columns :");
    scanf("%d%d",&rows,&columns);
    int m[rows][columns];
    printf("\nEnter Elements Of Matrix :");
    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
            scanf("%d",&m[i][j]);
    printf("\nEntered Matrix :\n");
    for(int i=0;i<rows;i++)
    {

            for(int j=0;j<columns;j++)
                printf(" a[%d][%d]%d  ",i,j,m[i][j]);
            printf("\n");
    }

}
