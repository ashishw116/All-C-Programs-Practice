//Write a program to swap two columns of matrix of structure by passing to a function with minimum and maximum column sums. Where Structure contains a Single Data member.
#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void swapColumns(int rows,int columns,data d[rows][columns],int c1,int c2);
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
    int c1,c2;
    printf("Enter two columns number for swaping : ");
    scanf("%d%d",&c1,&c2);
    if(c1>=1&&c1<=columns&&c2>=1&&c2<=columns)
    {
        swapColumns(rows,columns,d,c1-1,c2-1);
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
void swapColumns(int rows,int columns,data d[rows][columns],int c1,int c2)
{
    for(int i=0;i<rows;i++)
    {
            int temp=d[i][c1].num;
            d[i][c1].num=d[i][c2].num;
            d[i][c2].num=temp;
    }
}
