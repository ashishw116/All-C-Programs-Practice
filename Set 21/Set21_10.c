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
    int column;
    printf("\nEnter column For Sum From 1 to %d :",columns);
    scanf("%d",&column);
    int sum=0;
    for(int j=0;j<rows;j++)
        sum+=m[j][column-1];
    printf("\n Sum Of column :%d",sum);

}
