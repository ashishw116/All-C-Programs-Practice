// Write a program to sort an Array in Descending order using bubble sort.
#include<stdio.h>
void main()
{
    int size;
    printf("\n Enter The Size Of array:");
    scanf("%d",&size);
    int a[size];
    printf("\n Enter The Element of array:");
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("\n Entered array:");
    for(int i=0;i<size;i++)
        printf("%d ,",a[i]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSorted Array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
