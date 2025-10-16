//Write a program to illustrate the use of pointers on functions for arrays.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[]={1,2,3,4,5};
    int sum=0,*ps=&sum;
    getSum(a,ps);
    printf("Sum : %d",sum);
}
void getSum(int *p,int *ps)
{
    for(int i=0;i<5;i++)
    {
        *ps+=*(p+i);
    }
}
