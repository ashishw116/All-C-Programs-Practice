//Write a program to count number of prime numbers in an array.
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
    int count=getPrimeCount(&arr,n);
    printf("\nPrime Count : %d",count);
}
int getPrimeCount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int flag=1;
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    return count;
}
