//Write a program to get Trace and normal of a matrix. Put the obtained results into an array and return it for printing in the main.
#include<stdio.h>
#include<math.h>
int* getTrace_Normal(int mat[3][3]);
void main()
{
    int mat[3][3]={{1,2,3},{2,3,4},{3,4,0}};
    printf("Matrix : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    int *arr=getTrace_Normal(mat);
    printf("\n Trace = %d Normal = %d",arr[0],arr[1]);
}
int* getTrace_Normal(int m[3][3])
{
    static int arr[2];
    int trace=0,sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                trace+=m[i][j];
            }
            sum+=(m[i][j]*m[i][j]);
        }
    }
    int normal=(int)sqrt(sum);
    arr[0]=trace;
    arr[1]=normal;
    return arr;
}
