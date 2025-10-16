//WAP to illustrate the use of post and pre increment operator and Decrement Operator.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    printf("Pre increment ++a=%d",++a);
    printf("\nPost increment a++=%d",a++);
    printf("\nPre decrement --a=%d",--a);
    printf("\nPost decrement a--=%d",a--);
}
