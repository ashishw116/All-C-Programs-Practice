//Write a program to form a structure using three data members name, Roll no and percentage.
#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    int per;
};
void main()
{
    struct student s;
    printf("Enter the roll no :");
    scanf("%d",&s.roll);
    printf("Enter the name :");
    scanf("%s",s.name);
    printf("Enter the percentage :");
    scanf("%d",&s.per);
    printf("\nRoll no : %d \nName : %s\nPercentage :%d",s.roll,s.name,s.per);
}
