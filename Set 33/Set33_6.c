//Write a program to find the division of two integers using pointers
#include<stdio.h>
void main()
{
    int a,b,*p1=&a,*p2=&b;
    float div,*pd=&div;
    printf("Enter two integer :");
    scanf("%d%d",p1,p2);
    *pd=(float)*p1 / *p2;
    printf("division : %f\n",*pd);
}
