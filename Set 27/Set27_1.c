//Write a program to find the sum of Array Elements and return it to the main function.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array= ");
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
int getSum(int arr[],int n)
{
    int sum=arr[0];
    for(int i=1;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
