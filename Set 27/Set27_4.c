//Write a program to find sum of biggest and smallest elements of array. (Use Nested Functions)
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter element of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=getSum(arr,n);
    printf("\nSum : %d",sum);
}
int getSmall(int arr[],int n)
{
    int small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
        }
    }
    return small;
}
int getBig(int arr[],int n)
{
    int big=arr[0];
    for(int i=1;i<n;i++)
    {
        if(big<arr[i])
        {
            big=arr[i];
        }
    }
    return big;
}
int getSum(int arr[],int n)
{
    int sum=getSmall(arr,n)+getBig(arr,n);
    return sum;
}
