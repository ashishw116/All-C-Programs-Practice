//Write a program to  find the sum of  the Secondary Diagonal Elements of a Square matrix.
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
                    if((i+j)==(rows-1))sum+=m[i][j];
        }
    }
    else
        printf("\n Invalid Square matrix!!!");
}
