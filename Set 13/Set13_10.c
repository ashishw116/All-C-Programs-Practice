//Write a program to find the sum following series 1-1/2+ 1/3 - 1/4+ 1/5 - 1/6+……………
#include<stdio.h>
#include<math.h>
void main()
{
    int n,sign=1;
    float sum;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x=i*sign;
        float v=(float)1/x;
        sum+=v;
        sign=-sign;
    }
    printf("\n Sum=%f",sum);
}
