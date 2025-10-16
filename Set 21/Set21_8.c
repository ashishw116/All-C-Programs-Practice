//Write a program to find sum of element of  a Matrix.
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
    int sum=0;
    for(int i=0;i<rows;i++)
    {

            for(int j=0;j<columns;j++)
                sum+=m[i][j];
    }
    printf("\n Sum Of Matrix :%d",sum);

}
