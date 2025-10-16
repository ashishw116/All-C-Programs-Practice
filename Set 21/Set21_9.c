//Write a program to find the sum of the said row of a given matrix.
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
    int row;
    printf("\nEnter Row For Sum From 1 to %d :",rows);
    scanf("%d",&row);
    int sum=0;
    for(int j=0;j<columns;j++)
        sum+=m[row-1][j];
    printf("\n Sum Of Row :%d",sum);

}
