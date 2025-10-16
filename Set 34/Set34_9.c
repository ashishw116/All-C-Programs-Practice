//Write a program to illustrate the use of pointers on functions for normal variables.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=10,b=20,*pa=&a,*pb=&b;
    printf("Before Swapping a : %d , b : %d",*pa,*pb);
    swap(pa,pb);
    printf("\nAfter Swapping a : %d , b : %d",*pa,*pb);
}
void swap(int *x,int *y)
{
    int temp,*ptemp=&temp;
    *ptemp=*x;
    *x=*y;
    *y=*ptemp;
}
