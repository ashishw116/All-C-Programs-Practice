//Write a program to classify the array of structure of N students with the data members like roll no, name and percentage into 3 arrays of students of 2nd class, 1st class and distinction(50 to 60 for Second class, 60 to 70 First class and more than 70% it is distinction)
#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    int per;
};
void main()
{
    int n;
    printf("Enter Number Of How Many Students : ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll no :");
        scanf("%d",&s[i].roll);
        printf("Enter the name :");
        scanf("%s",s[i].name);
        printf("Enter the percentage :");
        scanf("%d",&s[i].per);
    }
    int sc=0,fc=0,dc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].per>50&&s[i].per<60)
            sc++;
        else if(s[i].per>60&&s[i].per<70)
            fc++;
        else if(s[i].per>70)
            dc++;
    }
    struct student second[sc],first[fc],distinction[dc];
    int si=0,fi=0,di=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].per>=50&&s[i].per<60)
            second[si++]=s[i];
        else if(s[i].per>=60&&s[i].per<70)
            first[fi++]=s[i];
        else if(s[i].per>=70&&s[i].per<=100)
            distinction[di++]=s[i];
    }
    printf("\nSecond Class : ");
    for(int i=0;i<sc;i++)
    {
        printf("\nRoll no : %d \nName : %s\nPercentage :%d",second[i].roll,second[i].name,second[i].per);
    }
    printf("\nFirst Class : ");
    for(int i=0;i<fc;i++)
    {
        printf("\nRoll no : %d \nName : %s\nPercentage :%d",first[i].roll,first[i].name,first[i].per);
    }
    printf("\nDistinction Class : ");
    for(int i=0;i<dc;i++)
    {
        printf("\nRoll no : %d \nName : %s\nPercentage :%d",distinction[i].roll,distinction[i].name,distinction[i].per);
    }
}
