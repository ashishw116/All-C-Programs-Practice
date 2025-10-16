//Write a program to take three sides and check whether they form a Triangle or not.
#include<stdio.h>
void main()
{
    int side1,side2,side3;
    printf("Enter sides of a triangle=");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1)
    {
        printf("\n Triangle can be formed.");
    }
    else
    {
        printf("\n Triangle can not be formed.");
    }
}
