//Write a program to find biggest of three no’s by without logical operator.
#include<stdio.h>
void main()
{
    int num1,num2,num3,big;
    printf("Enter 3 Number=");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
        if(num1>num3)
            big=num1;
        else
            big=num3;
    else
        if(num2>num3)
            big=num2;
        else
            big=num3;
    printf("%d is biggest",big);
}
