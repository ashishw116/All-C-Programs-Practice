//Write a program to Print the number which are divisible by 3 and 7 from 1 to n .
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(i%3==0&&i%7==0)
        printf("\n %d",i);
}
