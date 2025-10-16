//Write a program to find the sum of Principal Diagonal Elements of a matrix
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
        int sum=0;
        for(int i=0;i<rows;i++)
        {
                for(int j=0;j<columns;j++)
                    if(i==j)sum+=m[i][j];
        }
        printf("\n Sum of Principal Diagonal Elements is %d :\n",sum);
    }
    else
        printf("\n Invalid Square matrix!!!");
}
