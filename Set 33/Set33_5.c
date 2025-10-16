//write a program to find the sum of two variables using pointers.
#include<stdio.h>
void main()
{
    int a,b,sum,*p1=&a,*p2=&b,*ps=&sum;
    printf("Enter two integer :");
    scanf("%d%d",p1,p2);
    *ps=*p1+*p2;
    printf("sum : %d\n",*ps);
}
