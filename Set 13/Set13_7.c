//Write a program to find the sum following series 31 +32 +33 +34 +35 +-------------------n
#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=pow(3,i)+sum;
        }
    }
    printf("\n Sum =%d",sum);
}
