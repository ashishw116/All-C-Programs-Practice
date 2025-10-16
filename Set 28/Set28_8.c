//Write a program to find the Linear Regression between the hours of Sunshine and Number of Ice cream sold for the given data in two Arrays.
#include<stdio.h>
#include<math.h>
void main()
{
    int n=5;
    int x[5]={2,3,5,7,9};
    int y[5]={4,5,7,10,15};
    int sumx=0,sumy=0,sumxy=0,sumx2=0;
    int sat_sunshine=8;
    for(int i=0;i<5;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumxy+=(x[i]*y[i]);
        sumx2+=(x[i]*x[i]);
    }
    printf("Sumx= %d \nSumy= %d\nSumxy= %d\nSumx2= %d",sumx,sumy,sumxy,sumx2);
    float nr=(float)(n*sumxy-sumx*sumy);
    float de=(float)(n*sumx2-sumx*sumx);
    float m=nr/de;
    printf("\nm: %f",m);
    float b=(float)(sumy-m*sumx)/n;
    printf("\nb: %f",b);
    float sold=(float)(m*sat_sunshine+b);
    printf("\nNumber of Ice cream sold : %f",sold);
}
