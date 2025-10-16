//Write a program to find the grade of a student of a subject based on given table.
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter Marks=");
    scanf("%d",&marks);
    if(marks>70)
    {
        printf("\n Grade is Distinction");
    }
    else if(marks>60)
    {
        printf("\n Grade is 1st Division");
    }
    else if(marks>50)
    {
        printf("\n Grade is 2nd Division");
    }
    else if(marks>40)
    {
        printf("\n Grade is 3rd Division");
    }
    else if(marks>35)
    {
        printf("\n Grade is pass");
    }
    else
    {
        printf("\n Grade is fail");
    }
}
