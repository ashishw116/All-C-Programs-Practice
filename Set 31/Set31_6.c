//Write a program to pass an array to a function to find the mean and the standard deviation of the array elements. Return both from the function using the variable of a Structure.
#include<stdio.h>
#include<math.h>
struct dt
{
    float mean,std;
};
typedef struct dt data;
data getData(int arr[],int n);
void main()
{
    int n;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Element of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    data v=getData(arr,n);
    printf("Mean : %f, Standard deviation : %f",v.mean,v.std);
}
data getData(int arr[],int n)
{
    data result;
    result.mean=0;
    result.std=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    result.mean=(float)sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=pow((arr[i]-result.mean),2);
    }
    result.std=(float)sqrt(sum/n);
    return result;
}
