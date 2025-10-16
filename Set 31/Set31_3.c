//Write a program to pass a Structure variable of an employee with the data members like employee ID, Name and Salary to a function and Return the variable with the increased salary of 50% and print the result in main.
#include<stdio.h>
struct staff
{
    int id;
    char name[100];
    float salary;
};
typedef struct staff employee;
employee getIncreaseSalary(employee temp);
void main()
{
    employee e;
    printf("Enter the ID no :");
    scanf("%d",&e.id);
    printf("Enter the name :");
    scanf("%s",e.name);
    printf("Enter the Salary :");
    scanf("%f",&e.salary);
    printf("\nDistinction Class : ");
    employee newSalary=getIncreaseSalary(e);
    printf("\nId : %d \nName : %s\nSalary :%f",newSalary.id,newSalary.name,newSalary.salary);
}
employee getIncreaseSalary(employee temp)
{
    float per=temp.salary/100;
    float fifty_per=per*50;
    temp.salary=temp.salary+fifty_per;
    return temp;
}
