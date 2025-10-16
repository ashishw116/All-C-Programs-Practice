//Write a program to search an element in array and print its position.
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
    printf("\n Array : ");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
    int key,index=-1;
    printf("\n Enter The Element To search :");
    scanf("%d",&key);
    for(int i=0;i<size;i++)
        if(array[i]==key)
        {
            index=i;
            break;
        }
    if(index!=-1)
        printf("\n %d element is present at index %d ",key,index);
    else
        printf("\n Element %d Not Found",key);
}
