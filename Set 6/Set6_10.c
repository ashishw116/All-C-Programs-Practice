//Write a program to find grade of an employee based on the following given table using ternary operator.
#include<stdio.h>
void main()
{
    int salary;
    printf("Enter the salary=");
    scanf("%d",&salary);
    salary>45000&&salary<=60000?printf("Manager")
    :salary>35000?printf("Assistant Manager")
    :salary>25000?printf("1st Division Clerk")
    :salary>15000?printf("2nd Division Clerk")
    :salary>0?printf("Peon"):printf("!!Invalid Salary");
}
