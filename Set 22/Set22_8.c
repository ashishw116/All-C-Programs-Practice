//Write a program to interchange the primary diagonal to secondary diagonal of a Square matrix
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
        int p=0,s=rows-1;
        for(int i=0;i<rows;i++)
        {
                int temp=m[i][p];
                m[i][p]=m[i][s];
                m[i][s]=temp;
                p++,s--;
        }

        printf("\nMatrix :\n");
        for(int i=0;i<rows;i++)
        {
                for(int j=0;j<columns;j++)
                    printf(" %d,",m[i][j]);
                printf("\n");
        }
    }
    else
        printf("\n Invalid Square matrix!!!");
}
