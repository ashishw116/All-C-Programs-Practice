//Write a program to count positive , Negative and zero element in An Array.
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
    int positive=0,negative=0,zero=0;
    for(int i=0;i<size;i++)
        if(array[i]>0)
            positive++;
        else if(array[i]<0)
            negative++;
        else
            zero++;
    printf("\nPositive Count : %d \nNegative Count : %d \nZero Count : %d",positive,negative,zero);
}
