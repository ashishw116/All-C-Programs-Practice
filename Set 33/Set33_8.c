//Write a program to find the sum of array elements using pointers.
#include<stdio.h>
void main()
{
    int a[5],*p,sum=0,*psum;
    p=a;
    psum=&sum;
    printf("\nEnter The Array Elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<5;i++)
    {
        *psum+=(*p+i);
    }
    printf("Sum : %d",*psum);
}
