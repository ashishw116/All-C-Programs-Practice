//Write a program to add two matrices.
#include<stdio.h>
void main()
{
    int rows1,columns1,rows2,columns2;
    printf("\nEnter Rows And Columns of First Matrix:");
    scanf("%d%d",&rows1,&columns1);
    printf("\nEnter Rows And Columns of Second Matrix:");
    scanf("%d%d",&rows2,&columns2);
    if(rows1==rows2&&columns1==columns2)
    {
        int m1[rows1][columns1];
        printf("\nEnter Elements Of Matrix :");
        for(int i=0;i<rows1;i++)
            for(int j=0;j<columns1;j++)
                scanf("%d",&m1[i][j]);
        int m2[rows2][columns2];
        printf("\nEnter Elements Of Matrix :");
        for(int i=0;i<rows1;i++)
            for(int j=0;j<columns1;j++)
                scanf("%d",&m2[i][j]);
        printf("\n First Matrix :\n");
        for(int i=0;i<rows1;i++)
        {

                for(int j=0;j<columns1;j++)
                    printf(" %d,",m1[i][j]);
                printf("\n");
        }
        printf("\nSecond Matrix :\n");
        for(int i=0;i<rows1;i++)
        {

                for(int j=0;j<columns1;j++)
                    printf(" %d,",m2[i][j]);
                printf("\n");
        }
        int addition[rows1][columns1];
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns1;j++)
                addition[i][j]=m1[i][j]+m2[i][j];
        }
        printf("\n Addition Matrix :\n");
        for(int i=0;i<rows1;i++)
        {
                for(int j=0;j<columns1;j++)
                    printf(" %d,",addition[i][j]);
                printf("\n");
        }
    }
    else
        printf("\n Invalid Rows & Columns");
}
