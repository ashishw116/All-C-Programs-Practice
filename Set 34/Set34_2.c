//Write a program to print the elements of a matrix using the pointers which is initialized in the program only
#include<stdio.h>
void main()
{
    int *p;
    int m[2][3]={{1,2,3},{4,5,6}};
    printf("Matrix is : \n");
    p=m;
    int k=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(p+k));
            k++;
        }
        printf("\n");
    }
}
