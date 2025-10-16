//Write a program to create even arrays and odd array from a Given Array.
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
    int even[even_count],odd[odd_count];
    int p=0,q=0;
    for(int i=0;i<size;i++)
    {
        if(array[i]%2==0)
        {
            even[p++]=array[i];
        }
        else
        {
            odd[q++]=array[i];
        }
    }
    printf("\nOriginal Array Elements :");
    for(int i=0;i<size;i++)
        printf("\t %d",array[i]);
    printf("\nEven Array Elements :");
    for(int i=0;i<even_count;i++)
        printf("\t %d",even[i]);
    printf("\nOdd Array Elements :");
    for(int i=0;i<odd_count;i++)
        printf("\t %d",odd[i]);
}
