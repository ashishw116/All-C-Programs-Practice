//Write a program to find mean and standard deviation of 5 integers passed through an Array and return both by embedding into an array to main.
#include<stdio.h>
#include<math.h>
float* getValues(int arr[5]);
void main()
{
    int arr[5];
    printf("Enter 5 Integers :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered Array :");
    for(int i=0;i<5;i++)
    {
        printf("%d, ",arr[i]);
    }
    float *values=getValues(arr);
    printf("\nMean : %f \nStandard Deviation : %f",values[0],values[1]);
}
float* getValues(int arr[5])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    float mean=(float)sum/5;
    static float values[2];
    values[0]=mean;
    int numerator=0;
    for(int i=0;i<5;i++)
    {
        numerator+=pow((arr[i]-mean),2);
    }
    float std=sqrt((numerator/5));
    values[1]=std;
    return values;
}
