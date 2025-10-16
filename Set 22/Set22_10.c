//Write a program to print elements above the principle diagonal of matrix
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
        printf("\nElements above the principle diagonal of Matrix :\n");
        for(int i=0;i<rows;i++)
        {

                for(int j=0;j<columns;j++)
                    if(i<j)
                        printf(" %d",m[i][j]);
        }
    }
    else
        printf("\n Invalid Square matrix!!!");
}
