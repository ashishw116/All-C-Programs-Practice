//Writer a program to print the sum of the following series 1+1/2+1/3+1/4+1/5 .........n
#include<stdio.h>
void main()
{
    int n,i=1;
    float sum=0;
    printf("Enter Number :");
    scanf("%d",&n);
    do
    {
        float value=(float)1/i;
        sum+=value;
        i++;
    }while(i<=n);
    printf("\nSum=%f",sum);
}
