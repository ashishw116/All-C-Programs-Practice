//Write a program to print the number from 1 to 100 which are divisible by 4 and 5.
#include<stdio.h>
void main()
{
    int n=100,i=1;
    do
    {
        if(i%4==0&&i%5==0)
            printf("%d ",i);
        i++;
    }while(i<=n);
}
