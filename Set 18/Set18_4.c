//Write a program to find addition of n numbers.
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
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=array[i];
    printf("\nSum Of Array : %d",sum);
}
