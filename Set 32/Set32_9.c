//Write a program to declare a string in variable of length 10 along with the 3 integer data members. Accept the values for the integer data members and print the results.
#include<stdio.h>
union ut
{
    int a,b,c;
    char str[10];
};
typedef union ut Union;
void main()
{
    Union u;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&u.a,&u.b,&u.c);
    printf("Union  Data : %d, %d, %d\n",u.a,u.b,u.c);
}
