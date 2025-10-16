//Write a program to accept an array from the user and print the elements along with their respective positions.
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
    for(int i=0;i<size;i++)
        printf("\n array[%d] - %d element at %d ",i,array[i],&array[i]);
}
