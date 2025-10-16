//Write a program to display an integer with right justification filled with zeros.
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 3 Integers=");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("1st Integer=%010d \n2nd Integer=%010d \n3rd Integer=%010d ",num1,num2,num3);
}
