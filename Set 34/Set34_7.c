//Write a program to illustrate the use of dynamic memory allocation for an array to find the sum of its elements.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,*ps,sum=0;
    printf("Enter the range of the Array : ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    ps=&sum;
    for(int i=0;i<n;i++)
    {
        *ps+=(*(p+i));
    }
    printf("Sum of array : %d",*ps);
}
