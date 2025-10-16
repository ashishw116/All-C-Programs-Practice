//Write a program to swap said rows of matrix of structure by passing to a function. Where Structure contains a Single Data member.
#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void swapRows(int rows,int columns,data d[rows][columns],int r1,int r2);
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
    printf("\nOriginal matrix \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            printf("%d ",d[i][j].num);
        printf("\n");
    }
    int r1,r2;
    printf("Enter two rows number for swaping : ");
    scanf("%d%d",&r1,&r2);
    if(r1>=1&&r1<=rows&&r2>=1&&r2<=rows)
    {
        swapRows(rows,columns,d,r1-1,r2-1);
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
        printf("\n !!!!! Invalid Row !!!!!");
    }
}
void swapRows(int rows,int columns,data d[rows][columns],int r1,int r2)
{
    for(int i=0;i<columns;i++)
    {
            int temp=d[r1][i].num;
            d[r1][i].num=d[r2][i].num;
            d[r2][i].num=temp;
    }
}
