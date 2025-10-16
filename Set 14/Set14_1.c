//Write a program to print Multiplication table 1 to 10
#include<stdio.h>
void main()
{
    int n=10;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%2d ",i*j);
        }
        printf("\n");
    }
}
