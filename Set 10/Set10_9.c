//Write a program to find grade of an employee based on the following given table.
#include<stdio.h>
void main()
{
    int salary;
    printf("Enter Salary=");
    scanf("%d",&salary);
    if(salary>45000)
    {
        printf("\n Grade is Manager");
    }
    else if(salary>35000)
    {
        printf("\n Grade is Assistant Manager");
    }
    else if(salary>25000)
    {
        printf("\n Grade is 1st Division Clerk");
    }
    else if(salary>15000)
    {
        printf("\n Grade is 2nd Division Clerk");
    }
    else
    {
        printf("\n Grade is Peon");
    }
}
