//Write a program to find the grade of a student of a subject based on given table using ternary operator
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the subject marks=");
    scanf("%d",&marks);
    marks>70?printf("Distinction")
    :marks>60?printf("1st Division")
    :marks>50?printf("2nd Division")
    :marks>40?printf("3rd Division")
    :marks>35?printf("Pass class"):printf("Fail");
}
