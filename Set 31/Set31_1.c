//Write a program to sort the 5 student data in ascending order based on the name, Where the structure contains the data members like roll no, name and percentage.
#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    int per;
};
void main()
{
    int n=5;
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

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            if(s[i].per>s[j].per)
            {
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
    }
    for(int i=0;i<n;i++)
    {
        printf("\nRoll no : %d \nName : %s\nPercentage :%d",s[i].roll,s[i].name,s[i].per);
    }
}
