//Write a program reverse an Array.
#include<stdio.h>
void main()
{
    int size;
    printf("Enter The Size Of Array :");
    scanf("%d",&size);
    int array[size];
    printf("\n Enter The Array Elements : ");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\n Original Array: ");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
    int n=size-1;
    for(int i=0;i<size/2;i++)
    {
        int temp=array[i];
        array[i]=array[n];
        array[n--]=temp;
    }
    printf("\n After reverse Array: ");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
}
