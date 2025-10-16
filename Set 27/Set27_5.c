//Write a program to count number of positive, negative and zero elements in an array using nested functions (Use Nested Functions).
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
    getCount(arr,n);
}
int getPositiveCount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            count++;
    }
    return count;
}
int getNegativeCount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            count++;
    }
    return count;
}
int getZeroCount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count++;
    }
    return count;
}
void getCount(int arr[],int n)
{
    int positiveCount=getPositiveCount(arr,n);
    int negativeCount=getNegativeCount(arr,n);
    int zeroCount=getZeroCount(arr,n);
    printf("\nCount Positive : %d \nNegative : %d \nZero :%d",positiveCount,negativeCount,zeroCount);
}
