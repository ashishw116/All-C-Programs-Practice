//Write a program to print the Principal Diagonal Elements of a Square matrix.
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\nEnter Rows And Columns :");
    scanf("%d%d",&rows,&columns);

    if((rows==columns))
    {
        int m[rows][columns];
        printf("\nEnter Elements Of Matrix :");
        for(int i=0;i<rows;i++)
            for(int j=0;j<columns;j++)
                scanf("%d",&m[i][j]);
        printf("\nEntered Matrix :\n");
        for(int i=0;i<rows;i++)
        {

                for(int j=0;j<columns;j++)
                    printf(" %d,",m[i][j]);
                printf("\n");
        }

        printf("\n  Principal Diagonal Elements of a Square matrix :\n");
        for(int i=0;i<rows;i++)
        {
                for(int j=0;j<columns;j++)
                    printf(i==j?"%d":" ",m[i][j]);
                printf("\n");
        }
    }
    else
        printf("\n Invalid Square matrix!!!");
}
