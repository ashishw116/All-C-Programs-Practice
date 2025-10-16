//Write a program to input 3 integers and skip the 2nd integer using the formatted input operation.
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 3 Integers=");
    scanf("%d%*d%d",&num1,&num2,&num3);
    printf("1st Integer=%d, 2nd Integer=%d, 3rd Integer=%d ",num1,num2,num3);
}
