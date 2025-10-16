//Write a program to rotate given number of elements from an array from the front end
#include<stdio.h>
void main()
{
    int size;
    printf("\nEnter Size of Array :");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter Array Element :");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\nArray Element is :");
    for(int i=0;i<size;i++)
        printf("%d ,",array[i]);
    int n;
    printf("\nEnter Number Of Rotation :");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        int temp=array[0];
        for(int i=0;i<size-1;i++)
            array[i]=array[i+1];
        array[size-1]=temp;
    }
    printf("\nRotated Array Element is :");
    for(int i=0;i<size;i++)
        printf("%d ,",array[i]);
}
