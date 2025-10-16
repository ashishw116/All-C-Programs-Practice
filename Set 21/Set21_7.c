//Write a program to initialize a Matrix using flower braces  and print the elements along with their respective positions.
#include<stdio.h>
void main()
{
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("\nMatrix :\n");
    for(int i=0;i<3;i++)
    {

            for(int j=0;j<3;j++)
                printf(" a[%d][%d]%d  ",i,j,m[i][j]);
            printf("\n");
    }
}
