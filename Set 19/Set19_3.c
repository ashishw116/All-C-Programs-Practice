//Write a program to reverse each elements of an array.
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
    for(int i=0;i<size;i++)
    {
        int n=array[i],rev=0;
        while(n>0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        array[i]=rev;
    }
    printf("\n After Reverse Each Element of Array: ");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
}
