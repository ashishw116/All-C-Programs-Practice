//Write a program to print elements above the Secondary diagonal of matrix
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\n Enter rows and columns : ");
    scanf("%d%d",&rows,&columns);
    if(rows==columns)
    {
        int mx[rows][columns];
        printf("\n Enter the matrix elements:");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                scanf("%d",&mx[i][j]);
        }
        printf("\n Entered matrix elements:\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                printf(" %d",mx[i][j]);
            printf("\n");
        }

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                if((i+j)<rows-1)
                    printf(" %d",mx[i][j]);
            printf("\n");
        }
    }
    else
        printf("\nThis is not square matrix .");
}
