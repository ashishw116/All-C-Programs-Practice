//Write a program to find the sum of the said column of a given matrix.
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
                printf(" %d,",m[i][j]);
            printf("\n");
    }
    int column1,column2;
    printf("\nEnter Two Column  :");
    scanf("%d%d",&column1,&column2);
    if((column1>0 && column1<=columns) && (column2>0 && column2<=columns))
    {
        column1--,column2--;
        for(int i=0;i<rows;i++)
        {
            int temp=m[i][column1];
            m[i][column1]=m[i][column2];
            m[i][column2]=temp;
        }
        printf("\n Matrix :\n");
        for(int i=0;i<rows;i++)
        {

                for(int j=0;j<columns;j++)
                    printf(" %d,",m[i][j]);
                printf("\n");
        }
    }
    else
        printf("\n Invalid Columns!!!");
}
