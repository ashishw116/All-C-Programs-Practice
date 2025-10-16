//Write program to print the numbers from 1 to n with a line after every 3 numbers.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n %d",i);
        if(i%3==0)
            printf("\n---------------------------------------------------");
    }
}
