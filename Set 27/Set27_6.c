//Write a Program to sort an array in ascending order and print in main function.
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
    getAscending(arr,n);
    printf("\n Array Elements in Ascending Order : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
void getAscending(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}
