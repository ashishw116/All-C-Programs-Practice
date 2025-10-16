//Write a program to count even and odd numbers of an Array.
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
    int even_count=0,odd_count=0;
    for(int i=0;i<size;i++)
        if(array[i]%2==0)
            even_count++;
        else
            odd_count++;
    printf("\nEven Count : %d \nOdd Count : %d",even_count,odd_count);
}
