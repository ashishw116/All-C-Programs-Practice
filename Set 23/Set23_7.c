//Write a program to check whether a given matrix is unit matrix or not.
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\n Enter rows and columns of matrix : ");
    scanf("%d%d",&rows,&columns);
    if(rows==columns)
    {
        int m[rows][columns];
        printf("\n Enter the elements of matrix :");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                scanf("%d",&m[i][j]);
        }
        printf("\n Entered elements of matrix :\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                printf("%d",m[i][j]);
            printf("\n");
        }
        int f=1;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                if(i!=j && m[i][j]!=0||i==j && m[i][j]!=1)
                {
                    f=0;
                    break;
                }
        }
        if(f==1)
            printf("\n This is unit matrix");
        else
            printf("\n This is not unit matrix");
    }
    else
        printf("\n This is not square matrix ");
}
