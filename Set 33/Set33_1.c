//Write a program to print the address of an integer variable and its value.
#include<stdio.h>
void main()
{
    int a=10;
    int *ptr=&a;
    printf("Address : %d , Value : %d",ptr,*ptr);
}
