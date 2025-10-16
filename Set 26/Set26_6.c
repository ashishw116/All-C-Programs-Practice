//Write a program to check whether given number is prime or not.
#include<stdio.h>
int getPrime(int a)
{
    int f=1;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(getPrime(a))
        printf("\nNumber is prime ");
    else
        printf("\nNumber is not prime ");
}

