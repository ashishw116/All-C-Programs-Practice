//Write a program to insert an element in an array on said position and return the array.
#include<stdio.h>
void getArray(int [],int,int,int);
void main()
{
    int n;
    printf("Enter the size of array= ");
    scanf("%d",&n);
    int arr[n+1];
    printf("\n Enter element of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ins,pos;
    printf("\n Enter Element To Insert :");
    scanf("%d",&ins);
    printf("\n Enter Position :");
    scanf("%d",&pos);
    getArray(arr,n,ins,pos);
    printf("\n New Array :");
    for(int i=0;i<=n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
void getArray(int arr[],int n,int ins,int pos)
{
    pos--;
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ins;
}
