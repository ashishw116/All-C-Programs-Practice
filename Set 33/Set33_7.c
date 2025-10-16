//Write a program to swap two numbers using pointers.
#include<stdio.h>
void main()
{
    int a,b,*p1=&a,*p2=&b;
    printf("Enter two integer :");
    scanf("%d%d",p1,p2);
    printf("Number Before Swap A : %d, B : %d",*p1,*p2);
    int temp,*pt=&temp;
    *pt=*p1;
    *p1=*p2;
    *p2=*pt;
    printf("Number After Swap A : %d, B : %d",*p1,*p2);
}
