//Write a program to print the numbers upto n and print line after each 4 numbers.
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter Number :");
    scanf("%d",&n);
    do
    {
        printf("\n%d ",i);
        if(i%4==0)
            printf("\n----------------------------");
        i++;
    }while(i<=n);
}
