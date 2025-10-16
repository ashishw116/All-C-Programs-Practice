//Write a Program to accepts a square matrix and print the trace and normal of the matrix
#include<stdio.h>
#include<math.h>
void main()
{
    int size=9,arr[size],rows=3,columns=3,m[rows][columns];
    printf("\n Enter 9 elements of array : ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\n Entered elements of array :\n");
    for(int i=0;i<size;i++)
    printf("\n %d ",arr[i]);
    int n=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                m[i][j]=arr[n++];
            }
        }
        printf("\n Elements of matrix :\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                printf(" %d",m[i][j]);
            }
            printf("\n");
        }

}
