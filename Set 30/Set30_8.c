//Write a program to find the top scorer of among 10 students with the data members like name, roll no and percentage.
#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    int per;
};
void main()
{
    int n=10;
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
    struct student top_scorer;
    top_scorer=s[0];
    for(int i=1;i<n;i++)
    {
        if(top_scorer.per<s[i].per)
        {
            top_scorer=s[i];
        }
    }
    printf("\nTop Scorer \nRoll no : %d \nName : %s\nPercentage :%d",top_scorer.roll,top_scorer.name,top_scorer.per);
}
