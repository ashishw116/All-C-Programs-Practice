//Write a program to print the first n prime numbers.
#include<stdio.h>
void main()
{
    int n,c=0,i=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(c<n)
    {
        int flag=1;
        for(int j=2;j<i;j++)
        {
           if(i%j==0)
           {
               flag=0;
               break;
           }
        }
        if(flag==1)
        {
            printf("%d, ",i);
            c++;
        }
        i++;
    }
}
