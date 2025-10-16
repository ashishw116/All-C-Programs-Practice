//Write a program to print the numbers from an array which are divisible by 9 and not by 6.
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
        if(array[i]%9==0&&array[i]%6!=0)
            printf("\n array[%d] - %d element at %d ",i,array[i],&array[i]);
}
