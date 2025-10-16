//Write a program to print the first N even numbers
#include<stdio.h>
void main()
{
    int n,i=2,c=0;
    printf("Enter Number=");
    scanf("%d",&n);
    while(c<n)
    {
        printf("%d,",i);
        i+=2;
        c++;
    }
}
