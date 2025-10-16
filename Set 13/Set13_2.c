//Write a program to print the first N Fibonacci numbers.
#include<stdio.h>
void main()
{
    int n,fno=-1,sno=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int temp=fno+sno;
        fno=sno;
        sno=temp;
        printf(" %d",temp);
    }
}
