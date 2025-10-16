//Write a program to find the multiplication of  two matrices.
#include<stdio.h>
void main()
{
    int rows1,columns1;
    printf("\n Enter rows and columns of first matrix: ");
    scanf("%d%d",&rows1,&columns1);
    int rows2,columns2;
    printf("\n Enter rows and columns of second matrix : ");
    scanf("%d%d",&rows2,&columns2);
    if(columns1==rows2)
    {
        int m1[rows1][columns1],m2[rows2][columns2],product[rows1][columns2];
        printf("\n Enter the elements of first matrix :");
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns1;j++)
                scanf("%d",&m1[i][j]);
        }
        printf("\n Enter the elements of second matrix :");
        for(int i=0;i<rows2;i++)
        {
            for(int j=0;j<columns2;j++)
                scanf("%d",&m2[i][j]);
        }
        printf("\n Entered elements of first matrix :\n");
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns1;j++)
                printf("%d ",m1[i][j]);
            printf("\n");
        }
        printf("\n Entered elements of second matrix :\n");
        for(int i=0;i<rows2;i++)
        {
            for(int j=0;j<columns2;j++)
                printf("%d ",m2[i][j]);
            printf("\n");
        }
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns2;j++)
            {
                    product[i][j]=0;
                    for(int k=0;k<rows2;k++)
                    {
                        product[i][j]+=(m1[i][k]*m2[k][j]);
                    }
            }
        }
        printf("\n Result matrix :\n");
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns2;j++)
                printf("%d ",product[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("\nOrder Mismatch Of Matrices!!!!");
    }
}
