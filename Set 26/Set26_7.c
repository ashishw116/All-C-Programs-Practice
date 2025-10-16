//Write a program to find sum of number up to n which are divisible by 9 and not by 6.
#include<stdio.h>
int getSum(int a)
{
    int sum=0;
    for(int i=0;i<a;i++)
    {
        if(i%9==0 && i%6!=0)
        {
           sum+=i;
        }
    }
    return sum;
}
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int sum=getSum(a);
    printf("\nSum of numbers= %d ",sum);
}
