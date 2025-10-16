//Write a program to swap biggest and smallest element of an array.
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
    int big=array[0],small=array[0],big_pos=0,small_pos=0;
    for(int i=0;i<size;i++)
    {
        if(array[i]>big)
        {
            big=array[i];
            big_pos=i;
        }
        if(array[i]<small)
        {
            small=array[i];
            small_pos=i;
        }
    }
        int temp=array[big_pos];
        array[big_pos]=array[small_pos];
        array[small_pos]=temp;
        printf("\n After Swapping Array: ");
        for(int i=0;i<size;i++)
            printf("\n %d ",array[i]);
}
