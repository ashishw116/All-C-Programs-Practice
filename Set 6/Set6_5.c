//Write a program to take sides of a triangle and check the type of the triangle
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three Side of triangle = ");
    scanf("%d%d%d",&a,&b,&c);
    (a==b&&b==c)?printf("\nEquilateral Triangle")
     :(a==b||b==c||a==c)?printf("\nIsoceles Triangle"):printf("\nScalene Triangle");
}
