//Write a program to divide an array from it’s mid into two arrays.
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
    int first_size=size/2;
    int second_size=size-first_size;
    int fa[first_size],sa[second_size],pos=0;
    for(int i=0;i<size;i++)
    {
        if(i<first_size)
            fa[i]=array[i];
        else
            sa[pos++]=array[i];
    }
    printf("\nFirst Array Element is :");
    for(int i=0;i<first_size;i++)
        printf("%d ,",fa[i]);
    printf("\nSecond Array Element is :");
    for(int i=0;i<second_size;i++)
        printf("%d ,",sa[i]);

}
