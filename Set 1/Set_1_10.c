//Write a program to find the perimeter of a rectangle when length and breadth is given.
#include<stdio.h>
void main()
{
    int length,breadth,perimeter;
    printf("\nEnter length and breadth:");
    scanf("%d%d",&length,&breadth);
    perimeter=(2*length)+(2*breadth);
    printf("\nPerimeter of Rectangle is:%d",perimeter);
}
