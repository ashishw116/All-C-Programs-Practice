//Write a program to display an integer with positive sign with its format specifier.
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 3 Integers=");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("1st Integer=%+10d \n2nd Integer=%+10d \n3rd Integer=%+10d ",num1,num2,num3);
}
