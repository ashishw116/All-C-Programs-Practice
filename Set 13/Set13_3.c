//Write a program to find whether a given no is prime or not
#include<stdio.h>
void main()
{
    int n,flag=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n Number is prime.");
    }
    else
    {
        printf("\n Number is not prime.");
    }
}
