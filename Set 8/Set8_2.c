//Write a program to display floating point number with left justification.
#include<stdio.h>
void main()
{
    float num1,num2,num3;
    printf("Enter 3 Float=");
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("1st Float=%-10.4f \n2nd Float=%-10.4f \n3rd Float=%-10.4f ",num1,num2,num3);
}
