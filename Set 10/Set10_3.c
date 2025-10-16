//Write a program to find the biggest of four numbers by using the logical operator.
#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,big;
    printf("Enter 3 Number=");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    if(num1>num2 && num1>num3 && num1>num4)
        big=num1;
    else if(num2>num1 && num2>num3 && num2>num4)
        big=num2;
    else if(num3>num1 && num3>num2 && num3>num4)
        big=num3;
    else
        big=num4;
    printf("%d is biggest",big);
}
