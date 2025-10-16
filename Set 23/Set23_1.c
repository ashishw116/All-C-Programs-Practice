//Write a program to print elements Below the principle diagonal of matrix
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\n Enter the rows and columns :");
    scanf("%d%d",&rows,&columns);
    if(rows==columns)
    {
        int mx[rows][columns];
        printf("\n Enter The Matrix Elements :");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                    scanf("%d",&mx[i][j]);
            }
        }
        printf("\n Entered Matrix Elements :\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                    printf("%d ",mx[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(i>j)
                    printf(" %d ",mx[i][j]);
            }
              printf("\n");
        }

    }
    else
        printf("\n This is Not Square Matrix");
}
