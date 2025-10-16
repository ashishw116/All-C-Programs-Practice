//Write a program to find biggest element in an array.
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
    int big=0;
    for(int i=0;i<size;i++)
        if(big<array[i])
            big=array[i];
    printf("\nBiggest element Of Array : %d",big);
}
