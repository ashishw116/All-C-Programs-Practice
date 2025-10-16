//Write a program to interchange the given rows.
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
    int row1,row2;
    printf("\nEnter Two Rows  :");
    scanf("%d%d",&row1,&row2);
    if((row1>0 && row1<=rows) && (row2>0 && row2<=rows))
    {
        row1--,row2--;
        for(int i=0;i<columns;i++)
        {
            int temp=m[row1][i];
            m[row1][i]=m[row2][i];
            m[row2][i]=temp;
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
        printf("\n Invalid Rows!!!");
}
