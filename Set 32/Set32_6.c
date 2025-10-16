//Write a program to swap PDE and SDE elements of matrix of structure by passing to a function. Where Structure contains a Single Data member.
#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void swapDiagonals(int rows,int columns,data d[rows][columns]);
void main()
{
    int rows,columns;
    printf("Enter the rows and columns of matrix : ");
    scanf("%d%d",&rows,&columns);
    data d[rows][columns];
    printf("Enter Element of matrix :\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            scanf("%d",&d[i][j].num);
    }
    if(rows==columns)
    {
        printf("\nOriginal matrix \n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                printf("%d ",d[i][j].num);
            printf("\n");
        }
        swapDiagonals(rows,columns,d);
        printf("\nAfter rows swaping matrix : \n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                printf("%d ",d[i][j].num);
            printf("\n");
        }
    }
    else
    {
        printf("\n !!!!! Invalid Row & Columns !!!!!");
    }
}
void swapDiagonals(int rows,int columns,data d[rows][columns])
{
    int pde[rows],sde[rows];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(i==j)
                pde[i]=d[i][j].num;
            if(i+j==columns-1)
                sde[i]=d[i][j].num;
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(i==j)
                d[i][j].num=sde[i];
            if(i+j==columns-1)
                d[i][j].num=pde[i];
        }
    }
}
