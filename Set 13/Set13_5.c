//Write a program to find the sum following series 1/12+ 1/22 + 1/32+ 1/42 + 1/52+……………n
#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    float sum;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            sum=(float)(1/pow(i,2))+sum;
    }
    printf("\n Sum =%f",sum);
}
