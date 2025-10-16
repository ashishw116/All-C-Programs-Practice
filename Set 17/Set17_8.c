#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=1;
    float sum=0;
    printf("Enter Number :");
    scanf("%d",&n);
    do
    {
        float value=(float)1/pow(i,i);
        sum+=value;
        i++;
    }while(i<=n);
    printf("\nSum=%f",sum);
}
