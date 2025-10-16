//Write a program to dereferencing of the content of the variable.
#include<stdio.h>
void main()
{
    int a,*p1;
    p1=&a;
    printf("Enter integer :");
    scanf("%d",p1);
    printf("Integer Address : %d , Value : %d\n",p1,*p1);
    *p1=300;
    printf("After Dereferencing Integer Address : %d , Value : %d\n",p1,*p1);
}
