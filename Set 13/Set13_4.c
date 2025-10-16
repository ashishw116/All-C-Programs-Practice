//Write a program to Print the prime no up to n
#include<stdio.h>
void main()
{
    int n,flag=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
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
            printf("\n %d ",i);
        }
        flag=1;
    }
}
