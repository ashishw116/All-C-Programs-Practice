//Write a program to swap two given elements of an array.
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
    printf("\n Before Swapping Array: ");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
    int a,b;
    printf("\n Enter The 2 array elements for swapping :");
    scanf("%d%d",&a,&b);
    int apos=-1,bpos=-1;
    for(int i=0;i<size;i++)
    {
        if(array[i]==a)
            apos=i;
        if(array[i]==b)
            bpos=i;
    }
    if(apos!=-1&&bpos!=-1)
    {
        int temp=array[apos];
        array[apos]=array[bpos];
        array[bpos]=temp;
        printf("\n After Swapping Array: ");
        for(int i=0;i<size;i++)
            printf("\n %d ",array[i]);
    }
    else
        printf("\n Elements are not found!!");
}
