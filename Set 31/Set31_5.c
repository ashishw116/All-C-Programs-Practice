//Write a program to pass an array to a function to find the biggest and the smallest element of the array. Return both from the function using the variable of a Structure.
#include<stdio.h>
struct min_max
{
    int min,max;
};
typedef struct min_max minmax;
minmax getMinMax(int arr[],int n);
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
    minmax v=getMinMax(arr,n);
    printf("Min : %d,Max : %d",v.min,v.max);
}
minmax getMinMax(int arr[],int n)
{
    minmax result;
    result.max=arr[0];
    result.min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(result.min>arr[i])
            result.min=arr[i];
        else if(result.max<arr[i])
            result.max=arr[i];
    }
    return result;
}
