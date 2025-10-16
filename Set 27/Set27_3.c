//Write a program to reverse each element for the passed array to function and print the resulted array in main function.
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
    getReverse(arr,n);
    printf("\n Reversed Elements : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
void getReverse(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int n=arr[i],rev=0;
        while(n>0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        arr[i]=rev;
    }
}
