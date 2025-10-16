//Write a program to find biggest of three numbers by embedding ternary operator into a switch statement.
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 3 Numbers=");
    scanf("%d%d%d",&num1,&num2,&num3);
    switch((num1>num2&&num1>num3)?0:(num2>num1&&num2>num3)?1:2)
    {
        case 0:
            printf("%d is biggest",num1);
            break;
        case 1:
            printf("%d is biggest",num2);
            break;
        case 2:
            printf("%d is biggest",num3);
            break;
    }
}
