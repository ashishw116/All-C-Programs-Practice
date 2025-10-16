//Write a Program to return an even array for the given array from a function.
#include<stdio.h>
int* getEvenArray(int [],int);
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
    int *evenF=getEvenArray(arr,n);
    printf("\n Even Array : ");
    for(int i=1;i<=*evenF;i++)
    {
        printf(" %d ",evenF[i]);
    }
}
int* getEvenArray(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            c++;
    }
    int size=c+1,ind=1;
    static int evenArray[3];
    evenArray[0]=c;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            evenArray[ind++]=arr[i];
    }
    return evenArray;
}
