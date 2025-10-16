//Write a program to find biggest of two numbers using switch Statement.
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 2 Numbers=");
    scanf("%d%d",&num1,&num2);
    switch(num1>num2)
    {
        case 0:
            printf("%d is biggest",num2);
            break;
        case 1:
            printf("%d is biggest",num1);
            break;
    }
}
