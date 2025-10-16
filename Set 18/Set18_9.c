//Write a program to compute the sum of even and odd numbers stored in an array of n integers.
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
    int even_sum=0,odd_sum=0;
    for(int i=0;i<size;i++)
        if(array[i]%2==0)
            even_sum+=array[i];
        else
            odd_sum+=array[i];
    printf("\nEven Sum : %d \nOdd Sum : %d",even_sum,odd_sum);
}
