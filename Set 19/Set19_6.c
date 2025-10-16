//Write a program to insert an element in an array
#include<stdio.h>
void main()
{
    int size;
    printf("Enter The Size Of Array :");
    scanf("%d",&size);
    int array[size+1];
    printf("\n Enter The Array Elements :");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\n Array :");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
    int element,position;
    printf("\n Enter The Element And Index to add :");
    scanf("%d%d",&element,&position);
    position--;
    for(int i=size;i>position;i--)
        array[i]=array[i-1];
    array[position]=element;
    printf("\n Inserted Array : ");
    for(int i=0;i<=size;i++)
        printf("\n %d ",array[i]);
}
