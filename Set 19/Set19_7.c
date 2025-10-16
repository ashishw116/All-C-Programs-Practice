//Write a program to delete an element from an array
#include<stdio.h>
void main()
{
    int size;
    printf("Enter The Size Of Array :");
    scanf("%d",&size);
    int array[size];
    printf("\n Enter The Array Elements :");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\n Array :");
    for(int i=0;i<size;i++)
        printf("\n %d ",array[i]);
    int key,index=-1;
    printf("\n Enter The Element to Delete :");
    scanf("%d",&key);
    for(int i=0;i<size;i++)
        if(array[i]==key)
        {
            index=i;
            break;
        }
    if(index!=-1)
    {
        for(int i=index;i<size-1;i++)
            array[i]=array[i+1];
        printf("\n Array After Delete :");
        for(int i=0;i<size-1;i++)
            printf("\n %d ",array[i]);
    }
    else
        printf("\n Element %d Not Found",key);
}
