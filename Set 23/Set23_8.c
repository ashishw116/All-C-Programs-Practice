//Write a program to arrange the first 16 Fibonacci  numbers into a matrix of 4 X 4.
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\n Enter rows and columns of matrix : ");
    scanf("%d%d",&rows,&columns);
    if(rows==columns)
    {
        int m[rows][columns];
        int f=1,s=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                int t=f+s;
                f=s;
                s=t;
                m[i][j]=t;
            }
        }
        printf("\n Fibonacci elements of matrix :\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                printf("% d",m[i][j]);
            printf("\n");
        }

    }
    else
        printf("\n This is not square matrix ");
}
